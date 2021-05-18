//#include <stdio.h>
//#include <math.h>
//int main()
//{
//int a,q,b,s,g;
//printf("Input x:\n");
//scanf("%d",&a);
//a=fabs(a);
//q = a/1000;
//b = (a/100)%10;
//s = (a/10)%10;
//g = a%10;
//printf("y=%d\n",q+s*100+g*1000+b*10);
//printf("a=%d,b=%d\n",g*10+s,b*10+q);
//int tmp =pow((g*10+s),2)+pow((b*10+q),2);
//printf("result=%d\n",tmp);
////}
//#include <stdio.h>
//
//int main()
//{
//char a,b,c;
//printf("Input your English name:\n");
//scanf("%c%c%c",&a,&b,&c);
//printf("%c%c%c\n",a-32,b,c);
//printf("%c:%d",a,a-96);
//printf("%c:%d",b,b-96);
//printf("%c:%d",c,c-96);
//}
#include<stdio.h>

int main()
{
int cm,kg;
float tmp;
printf("Input weight, height:\n");
scanf("%d,%d",&kg,&cm);
printf("weight=%d\n",2*kg);
printf("height=%.2f\n",cm/100.0);
tmp = kg/(cm*cm/10000.0);
printf("t=%.2f\n",tmp);
}
