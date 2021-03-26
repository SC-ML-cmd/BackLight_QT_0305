#ifndef DEALIGHTPARAMETER_H
#define DEALIGHTPARAMETER_H


class DeadLightParameter
{
public:
    DeadLightParameter();
    //死灯检测矩形区域 由对角两点组成
    double detectX1 = 0;
    double detectY1 = 0;
    double detectX2 = 100;
    double detectY2 = 1500;

    double areaUpperLimit = 150000;
    double areaDownLimit = 300;
    double lengthWidthRadio = 8;
    double doubtAreaInMeanUpLimit = 180;

    double doubtAreaOutMean1 = 105;
    double doubtAreaInMean1 = 105;
    double doubtAreaIntensity1 = 15;

    double doubtAreaIntensity2 = 24.3;
    double fourAngleArea = 500;
    double fourAngleRadio = 5;

    double doubtAreaIntensity3 = 105;
    double wholeMeanDownlimit = 90;
};

#endif // DEALIGHTPARAMETER_H
