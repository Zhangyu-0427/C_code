#include "Complex.h"

int main()
{
    //创建一个复数
    Complex* tmp1 = CreatComplex(4.2, 5.0);
    //打印第一个复数
    printf("第一个复数:%4.1f + %4.1f i\n", tmp1->RealPart, tmp1->ImagePart);
    //创建第二个复数
    Complex* tmp2 = CreatComplex(2.1, -4.3);
    //打印第二个复数
    printf("第二个复数:%4.1f + %4.1f i\n", tmp2->RealPart, tmp2->ImagePart);

    //测试相关操作
    printf("\n----------------------------\n");

    printf("第一个复数的实部:%4.1f 虚部:%4.1f\n", GetReal(*tmp1), GetImage(*tmp1));
    printf("第二个复数的实部:%4.1f 虚部:%4.1f\n", GetReal(*tmp2), GetImage(*tmp2));

    printf("两个复数相加后得到一个新复数的实部:%4.1f 虚部:%4.1f\n",
           GetReal(*AddComplex(*tmp1, *tmp2)), GetImage(*AddComplex(*tmp1, *tmp2)));

    printf("两个复数相减后得到一个新复数的实部:%4.1f 虚部:%4.1f.(默认:第一个复数 - 第二个复数)\n",
           GetReal(*SubComplex(*tmp1, *tmp2)), GetImage(*SubComplex(*tmp1, *tmp2)));






    return 0;
}
