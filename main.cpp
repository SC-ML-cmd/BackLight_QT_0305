#include "mainwindow.h"
#include <QApplication>
#include <QLoggingCategory>
#include "dbhelper.h"
#include<QSharedMemory>
#include <Dbghelp.h>
#include <Windows.h>

using namespace std;
QSqlDatabase  db;
QString  mysql;

long  __stdcall CrashInfocallback(_EXCEPTION_POINTERS *pexcp)
{
    //创建 Dump 文件
    QString FileName__ = QDateTime::currentDateTime().toString("yyyyMMdd-hhmmss")
            + ".DMP"; //以crash时间 命名
    HANDLE hDumpFile = ::CreateFile(
        FileName__.toStdWString().c_str(),
        GENERIC_WRITE,
        0,
        NULL,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
    if (hDumpFile != INVALID_HANDLE_VALUE)
    {
        //Dump信息
        MINIDUMP_EXCEPTION_INFORMATION dumpInfo;
        dumpInfo.ExceptionPointers = pexcp;
        dumpInfo.ThreadId = GetCurrentThreadId();
        dumpInfo.ClientPointers = TRUE;
        //写入Dump文件内容
        ::MiniDumpWriteDump(
            GetCurrentProcess(),
            GetCurrentProcessId(),
            hDumpFile,
            MiniDumpNormal,
            &dumpInfo,
            NULL,
            NULL
        );
    }
    return 0;
}


int main(int argc, char *argv[])
{
    static QSharedMemory *shareMem = new QSharedMemory( "SingleApp"); //创建“SingleApp”的共享内存块
    if ( !shareMem->create( 1 ) )//创建大小1b的内存
    {
        qApp->quit(); //创建失败，说明已经有一个程序运行，退出当前程序
        return -1;
    }
    QApplication::addLibraryPath("./plugins");
    QApplication a(argc, argv);

    ::SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)CrashInfocallback);
    QApplication::addLibraryPath("./plugins");
    connect_mysql();
    MainWindow w;
    w.show();
    return a.exec();
}

