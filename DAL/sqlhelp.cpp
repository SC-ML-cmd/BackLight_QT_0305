#include "sqlhelp.h"

SqlHelp::SqlHelp()
{
}
QSqlDatabase SqlHelp::db = QSqlDatabase::addDatabase("QSQLITE"); //类的静态成员变量需要在类外分配对象
QSqlQuery* SqlHelp::query = nullptr;

