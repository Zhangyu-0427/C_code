//#include <Stdio.h>
//
//int main()
//{
//    //
//    //位段——二进制位
//    //冒号后面表示的是比特位
//    struct S
//    {
//        int a : 1;
//        int b : 1;
//        int c : 1;
//        int d : 1;
//    };
//    struct S s;
//    printf("%d\n",sizeof(s));
//    return 0;
//}


//#include <stdio.h>
//
//int check_sys()
//{
//    union un
//    {
//        char a;
//        int b;
//    }u;
//    u.b = 1;
//    return u.a;
//}
//int main()
//{
//    int ret = check_sys();
//    if(ret)
//        printf("小端");
//    else
//        printf("大端");
//    return 0;
//}

#include <stdio.h>

int main()
{
    union Un
    {
        int a;
        char tmp[6];
    }U;

    printf("%d\n",sizeof(U));//8
    return 0;
}







