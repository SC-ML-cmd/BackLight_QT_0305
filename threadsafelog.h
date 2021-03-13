#ifndef THREADSAFELOG_H
#define THREADSAFELOG_H

#include <QMutex>
#include <QMutexLocker>
#include <QVariant>
#include <QFile>

class ThreadSafelog
{
public:
    explicit ThreadSafelog():path("D:\\thread_time_after.txt"){}

    void printLog(QVariant msg){
        //获取锁对象
        QMutexLocker locker(&mutex);

        QFile file(path);
        file.open(QFile::WriteOnly | QFile::Append | QFile::Text);

        file.write(msg.toString().toStdString().c_str());
        file.write(QString("\n").toStdString().c_str());
        file.close();
    }
private:
    QString path;
    mutable QMutex mutex;
};

#endif // THREADSAFELOG_H
