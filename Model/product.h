#ifndef PRODUCT_H
#define PRODUCT_H
#include"opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>
#include "QString"

using namespace cv;
class Product
{
public:
    Product();
    Mat* SideLight_Main;
    Mat* SideLight_Left;
    Mat* SideLight_Right;

    Mat* White_Main;
    Mat* White_Left;
    Mat* White_Right;

    Mat* adsorptionImg;

    //线程1检测结果
    bool thread1Result;
    bool thread2Result;
    bool thread3Result;

    //线程结果图片
    Mat* resultImg1;
    Mat* resultImg2;
    Mat* resultImg3;

    //结果字符串
    QString thread1ResStr;
    QString thread2ResStr;
    QString thread3ResStr;

    //三个线程的结果
    bool result ;
};

#endif // PRODUCT_H
