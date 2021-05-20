#include "product.h"

Product::Product()
{
    //赋值为空指针，防止野指针
    SideLight_Main = nullptr;
    SideLight_Left = nullptr;
    SideLight_Right = nullptr;

    White_Main = nullptr;
    White_Left = nullptr;
    White_Right = nullptr;

    adsorptionImg = nullptr;

    //线程1检测结果
    thread1Result = false;
    thread2Result = false;
    thread3Result = false;

    //线程结果图片
    resultImg1 = nullptr;
    resultImg2 = nullptr;
    resultImg3 = nullptr;

    //结果字符串
    thread1ResStr = "";
    thread2ResStr = "";
    thread3ResStr = "";

    //三个线程的结果 false表示没有缺陷
    result = false;
}
