#include "Complex.h"

Complex* CreatComplex(double realpart, double imagepart)
{
    Complex* new_Complex = (Complex*)malloc(sizeof(Complex));
    if(new_Complex == NULL)
    {
        printf("在初始化一个复数中出现了错误，已自动结束程序。");
        exit(0);
    }

    new_Complex->ImagePart = imagepart;
    new_Complex->RealPart  = realpart;
    return new_Complex;
}

//获取某个复数的实部
double GetReal(Complex tmp)
{
    return tmp.RealPart;
}

//获取某个复数的虚部
double GetImage(Complex tmp)
{
    return tmp.ImagePart;
}

//复数的加法
Complex* AddComplex(Complex a, Complex b)
{
    double new_realpart  = a.RealPart  + b.RealPart;
    double new_imagepart = a.ImagePart + b.ImagePart;

    return CreatComplex(new_realpart, new_imagepart);
}

//复数的减法(默认减法顺序: 前减后 即 a - b)
Complex* SubComplex(Complex a, Complex b)
{
    double new_realpart  = a.RealPart  - b.RealPart;
    double new_imagepart = a.ImagePart - b.ImagePart;

    return CreatComplex(new_realpart, new_imagepart);
}
