#include <stdio.h>

#define MAX 10000
int Prime[MAX];//定义素数表

void print_prime(int n, int Prime[],int j);//打印一个数的质因数分解结果
int Is_prime(int n);//判断一个数是否为素数

int main()
{
    int a, b;
    int i, j = 0;
    scanf("%d %d",&a, &b);
    //填充素数表
    for(i = 2;i<=MAX;i++)
    {
        if( Is_prime(i) )
        {
            Prime[j] = i;
            j++;
        }
    }
    //输出每个数的分解结果
    for(i = a; i<=b; i++)
    {
        print_prime(i,Prime,j);
        printf("\n");
    }
    //结束程序
    return 0;
}
void print_prime(int n, int Prime[], int j)
{
    int i;
    int flag = 0;
    printf("%d=",n);

    //函数print_prime 如果一个数为素数直接打印结果
    if(Is_prime(n))
    {
        printf("%d",n);
    }
    //非素数 即可分解的情况
    else
    {
        for( i = 0; i<j; i++ )
        {
            if( n % Prime[i] == 0 )
            {
                flag++;
                if( flag == 1 )
                {
                    printf("%d",Prime[i]);
                    n = n / Prime[i];
                    i--;
                    //如果这个数能被素数分解那么这个数除以
                    //这个素数后的结果还要与这个素数进行取余
                    //用取余结果来判断是否还能被分解  所以这
                    //里需要进行(减减)“--”操作
                }
                else
                {
                    printf("*%d",Prime[i]);
                    n = n / Prime[i];
                   i--;
                    //与上同理
                }
            }
        }
    }
}
int Is_prime(int n)
{
    int i= 0;
    if(n <= 1)
        return 0;
    else if( n == 2 )
        return 1;
    else
    {
        for(i = 2;i<n;i++)
        {
            if(n % i == 0)
                return 0;
        }
        return 1;
    }
}
