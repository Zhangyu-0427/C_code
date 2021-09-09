#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct{

    double RealPart;
    double ImagePart;

}Complex;

//创建一个复数
Complex* CreatComplex(double realpart, double imagepart);

//获取某个复数的实部
double GetReal(Complex tmp);

//获取某个复数的虚部
double GetImage(Complex tmp);

//复数的加法
Complex* AddComplex(Complex a, Complex b);

//复数的减法
Complex* SubComplex(Complex a, Complex b);
