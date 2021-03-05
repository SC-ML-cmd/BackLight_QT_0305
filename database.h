#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QObject>
#include<QDebug>
extern QSqlDatabase  db7;

static bool connect_mysql();

static bool close_mysql();
#endif // DATABASE_H
