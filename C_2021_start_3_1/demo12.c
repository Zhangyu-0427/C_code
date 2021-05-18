#include <stdio.h>
#include <stdlib.h>

int num=0;
void move(char get,char put)
{
    num++;
    printf("%c------>%c  %d\n",get,put,num);
}
void hanoit(int n,char a,char b,char c)
{
    if(n==1)
    {
        move(a,c);
    }
    else
    {
        hanoit(n-1,a,c,b);
        move(a,c);
        hanoit(n-1,b,a,c);
    }
}
int main()
{
    int m;
    scanf("%d",&m);
    hanoit(m,'A','B','C');
    system("pause");
    return 0;
}
