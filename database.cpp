#include"database.h"
static bool connect_mysql()
{
        db7=QSqlDatabase::addDatabase("QMYSQL");
        db7.setHostName("localhost");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
        db7.setPort(3306);                 //连接数据库端口号，与设置一致
        db7.setDatabaseName("lcd");      //连接数据库名，与设置一致
        db7.setUserName("root");          //数据库用户名，与设置一致
        db7.setPassword("3477");    //数据库密码，与设置一致
        db7.open();
        if(!db7.open())
        {
            qDebug()<<"不能连接"<<"connect to mysql error"<<db7.lastError().text();
            return false ;
        }
        else
        {
             qDebug()<<"连接成功"<<"connect to mysql OK";
        }

        return true;

}
static bool close_mysql()
{
    db7.close();
    return true;
}
