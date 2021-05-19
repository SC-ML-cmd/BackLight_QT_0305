#ifndef DEADLIGHTPARADAO_H
#define DEADLIGHTPARADAO_H

#include <iostream>
#include <vector>
using namespace std;

#include "./Model/deadlightparameter.h"
#include "QStringLiteral"
#include "QString"
#include "sqlhelp.h"


class DeadLightParaDAO
{
public:
    DeadLightParaDAO();


    void updateDeadLightPara(DeadLightParameter* SDPara);  //用于更新死灯参数

    DeadLightParameter* getDeadLightParaById(int id);      //按照id查找一组死灯参数

    vector<DeadLightParameter*> getList();                  //获取所有死灯参数


};

#endif // DEADLIGHTPARADAO_H
