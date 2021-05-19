#ifndef DEALIGHTPARAMETER_H
#define DEALIGHTPARAMETER_H


class DeadLightParameter
{
public:
    DeadLightParameter(){}

    DeadLightParameter(double detectX1, double detectY1, double detectX2, double detectY2,
                       double areaUpperLimit, double areaDownLimit, double lengthWidthRadio,
                       double doubtAreaInMeanUpLimit, double doubtAreaOutMean1, double doubtAreaInMean1,
                       double doubtAreaIntensity1, double doubtAreaIntensity2, double fourAngleArea,
                       double fourAngleRadio, double doubtAreaIntensity3, double wholeMeanDownlimit ){

        this->detectX1 = detectX1;
        this->detectY1 = detectY1;
        this->detectX2 = detectX2;
        this->detectY2 = detectY2;

        this->areaUpperLimit = areaUpperLimit;
        this->areaDownLimit = areaDownLimit;
        this->lengthWidthRadio = lengthWidthRadio;
        this->doubtAreaInMeanUpLimit = doubtAreaInMeanUpLimit;

        this->doubtAreaOutMean1 = doubtAreaOutMean1;
        this->doubtAreaInMean1 = doubtAreaInMean1;
        this->doubtAreaIntensity1 = doubtAreaIntensity1;

        this->doubtAreaIntensity2 = doubtAreaIntensity2;
        this->fourAngleArea = fourAngleArea;
        this->fourAngleRadio = fourAngleRadio;

        this->doubtAreaIntensity3 = doubtAreaIntensity3;
        this->wholeMeanDownlimit = wholeMeanDownlimit;

    }
    int id = 1;
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

