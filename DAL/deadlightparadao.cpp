#include "deadlightparadao.h"

DeadLightParaDAO::DeadLightParaDAO()
{

}


/**
* @methodname    updateDeadLightPara
* @brief         更新参数到数据库中
* @author        wsc
* @date          2021-03-27
*/
void DeadLightParaDAO::updateDeadLightPara(DeadLightParameter* SDPara)
{
    //打开数据库连接
    SqlHelp::connect_SqLite();

    QString sql = QStringLiteral("UPDATE DeadLightParameter SET detectX1 = '%1', detectY1 = '%2', detectX2 = '%3', detectY2 = '%4', areaUpperLimit = '%5', areaDownLimit = '%6', lengthWidthRadio = '%7', doubtAreaInMeanUpLimit = '%8', doubtAreaOutMean1 = '%9', doubtAreaInMean1 = '%10', doubtAreaIntensity1 = '%11', doubtAreaIntensity2 = '%12', fourAngleArea = '%13', fourAngleRadio = '%14', doubtAreaIntensity3 = '%14', wholeMeanDownlimit = '%16' ").arg(SDPara->detectX1).arg(SDPara->detectY1).arg(SDPara->detectX1).arg(SDPara->detectY2)
                              .arg(SDPara->areaUpperLimit).arg(SDPara->areaDownLimit).arg(SDPara->lengthWidthRadio)
                              .arg(SDPara->doubtAreaInMeanUpLimit).arg(SDPara->doubtAreaOutMean1).arg(SDPara->doubtAreaInMean1)
                              .arg(SDPara->doubtAreaIntensity1).arg(SDPara->doubtAreaIntensity2).arg(SDPara->fourAngleArea)
                              .arg(SDPara->fourAngleRadio).arg(SDPara->doubtAreaIntensity3).arg(SDPara->wholeMeanDownlimit);
    SqlHelp::query->exec(sql);
    //关闭数据库连接
    SqlHelp::close_SqLite();
}


/**
* @methodname    DeadLightParaDAO
* @brief         通过id获得一组死灯参数
* @author        wsc
* @date          2021-03-27
*/
DeadLightParameter* DeadLightParaDAO::getDeadLightParaById(int id){

    //打开数据库连接
    SqlHelp::connect_SqLite();

    //获取sql
    QString sql = QStringLiteral("SELECT * FROM DeadLightParameter Where id = '%0'").arg(id);

    //执行SQL语句
    if(!SqlHelp::query->exec(sql)){
        //关闭数据库连接
        SqlHelp::close_SqLite();
        return nullptr;
    }else {
        SqlHelp::query->next();

        DeadLightParameter* SDPara = new DeadLightParameter(
                    SqlHelp::query->value("detectX1").toDouble(), SqlHelp::query->value("detectY1").toDouble(),
                    SqlHelp::query->value("detectX2").toDouble(), SqlHelp::query->value("detectY2").toDouble(),

                    SqlHelp::query->value("areaUpperLimit").toDouble(), SqlHelp::query->value("areaDownLimit").toDouble(),
                    SqlHelp::query->value("lengthWidthRadio").toDouble(), SqlHelp::query->value("doubtAreaInMeanUpLimit").toDouble(),

                    SqlHelp::query->value("doubtAreaOutMean1").toDouble(), SqlHelp::query->value("doubtAreaInMean1").toDouble(),
                    SqlHelp::query->value("doubtAreaIntensity1").toDouble(), SqlHelp::query->value("doubtAreaIntensity2").toDouble(),

                    SqlHelp::query->value("fourAngleArea").toDouble(), SqlHelp::query->value("fourAngleRadio").toDouble(),
                    SqlHelp::query->value("doubtAreaIntensity3").toDouble(), SqlHelp::query->value("wholeMeanDownlimit").toDouble()
                    );

        //关闭数据库连接
        SqlHelp::close_SqLite();
        return SDPara;
    }
}


/**
* @methodname    getList
* @brief         获取死灯参数集合
* @author        wsc
* @date          2021-03-27
*/
vector<DeadLightParameter*> DeadLightParaDAO::getList(){

    //获取数据库连接
    SqlHelp::connect_SqLite();
    //sql字符串
    QString sql = "SELECT * FROM DeadLightParameter";

    vector<DeadLightParameter*> vectorDeadlightPara;

    //执行SQL语句
    if(!SqlHelp::query->exec(sql)){

        //关闭数据库连接
        SqlHelp::close_SqLite();
        return vectorDeadlightPara;
    }else {
        while(SqlHelp::query->next())
        {
            DeadLightParameter* SDPara = new DeadLightParameter(
                        SqlHelp::query->value("detectX1").toDouble(), SqlHelp::query->value("detectY1").toDouble(),
                        SqlHelp::query->value("detectX2").toDouble(), SqlHelp::query->value("detectY2").toDouble(),
                        SqlHelp::query->value("areaUpperLimit").toDouble(),SqlHelp::query->value("areaDownLimit").toDouble(),
                        SqlHelp::query->value("lengthWidthRadio").toDouble(), SqlHelp::query->value("doubtAreaInMeanUpLimit").toDouble(),
                        SqlHelp::query->value("doubtAreaOutMean1").toDouble(), SqlHelp::query->value("doubtAreaInMean1").toDouble(),
                        SqlHelp::query->value("doubtAreaIntensity1").toDouble(), SqlHelp::query->value("doubtAreaIntensity2").toDouble(),
                        SqlHelp::query->value("fourAngleArea").toDouble(), SqlHelp::query->value("fourAngleRadio").toDouble(),
                        SqlHelp::query->value("doubtAreaIntensity3").toDouble(), SqlHelp::query->value("wholeMeanDownlimit").toDouble()
                        );

            vectorDeadlightPara.push_back(SDPara);
        }

        //关闭数据库连接
        SqlHelp::close_SqLite();
        return vectorDeadlightPara;
    }
}
