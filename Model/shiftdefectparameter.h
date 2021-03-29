#ifndef SHIFTDEFECTPARAMETER_H
#define SHIFTDEFECTPARAMETER_H


class ShiftDefectParameter
{
public:
    ShiftDefectParameter(){}

    double edgeAreaUpperLimit = 1000;

    double edgeAreaDownLimit = 80;

    double lightPortShieldWidth = 10;

    double areaUpperLimit = 80000;

    double areaDownLimit = 200;

    double standardDevThres1 = 13;

    double standardDevThres2 = 15;

    double lengthWidthRadioULimit = 10;

    double lengthWidthRadio = 8;

    double doubtAreaIntensity1 = 13;

    double doubtAreaIntensity2 = 9.5;
};

#endif // SHIFTDEFECTPARAMETER_H
