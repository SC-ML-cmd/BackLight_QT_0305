#ifndef SQLHELP_H
#define SQLHELP_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QObject>
#include<QDebug>
#include<QApplication>
#include"QCoreApplication"
#include <QMessageBox>

class SqlHelp
{
public:
    SqlHelp();
    static QSqlDatabase db;                         //定义类的静态变量
    static QSqlQuery *query;
    static int m_value;		//定义类的静态成员变量
    static bool connect_SqLite()
    {
        db = QSqlDatabase::addDatabase("QSQLITE");

        db.setDatabaseName("D:\\Backlight1.0.db");  //连接数据库名，与设置一致
        if(!db.open())
        {
            return false ;
        }
        else
        {
            query = new QSqlQuery(SqlHelp::db);
            return true;
        }
    }
    static bool close_SqLite()
    {
        db.close();
        return true;
    }
};

#endif // SQLHELP_H
