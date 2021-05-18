//#include <stdio.h>

//int main()
//{
//    char arr[5];
//    printf("%d",sizeof(arr));
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
////    char a[10],b[10];
////    char str[7]="admin";
////    while(scanf("%s%s",&a,&b)==2)
////    {
////        (strcmp(a, str)==0 && strcmp(b, str)==0)?printf("Login Success!\n"):printf("Login Fail!\n");
////    }
////    return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//    printf("\n%d",printf("Hello world!"));
//    return 0;
//}
//#include <stdio.h>
////½ð×ÖËþÎÊÌâ
//int main()
//{
//    char a;
//    scanf("%c",&a);
//    for(int i=1;i<6;i++)
//    {
//        for(int j= 5-i; j>0;j--)
//            printf(" ");
//        for(int m =1;m<=i;m++)
//            printf("%c ",a);
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char arr[]={'73', '32', '99', '97', '110', '32', '100', '111', '32', '105', '116' , '33'};
//    int se = sizeof(arr)/sizeof(arr[0]);
//    for(int i =0;i<se; i++)
//        printf("%s\n",arr[i]);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int arr[20],N,i=0,A;
//    scanf("%d",&N);
//    for(i;i<N;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    scanf("%d",&A);
//    for(i;i<N;i++)
//    {
//        if(arr[i]<A && arr[i+1]>A)
//        {
//            arr[i+1]=A;
//        }
//    }
//    for(i;i<=N;i++)
//        printf("%d ",arr[i]);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a,b,c,max;
//    scanf("%d %d %d",&a,&b,&c);
//    max = (a>b)?(a>c?a:c):(b>c?b:c);
//    printf("%d\n",max);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int year;
//again: scanf("%d",&year);
//    if(year<=3000)
//    {
//        if(year%100!=0 && year%4==0 || year%400==0)
//        {
//            printf("%d是闰年。\n",year);
//        }
//        else
//            printf("%d不是闰年。\n",year);
//    }
//    else
//    {
//        printf("年份过大！");
//    }
//    goto again;
//    return 0;
//}
//#include <stdio.h>

//int main()
//{
//    int year=0;
//    while(scanf("%d",&year)!=EOF)
//    {
//       if(year<=3000)
//       {
//            if(year%100!=0 && year%4==0 || year%400==0)
//            {
//                printf("%d是闰年。\n",year);
//            }
//            else
//            {
//                printf("%d不是闰年。\n",year);
//            }
//       }
//       else
//       {
//        printf("年份过大！");
//       }
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    float result;
//a:  scanf("%f",&result);
//    if(result<=100 && result>=0)
//    {
//        if(result>=90)
//            printf("A");
//        else if(result>=80)
//            printf("B");
//        else if(result>=70)
//            printf("C");
//        else if(result>=60)
//            printf("D");
//        else
//            printf("E\n");
//    }
//    else
//    {
//        printf("分数不合法。");
//    }
//    printf("\n");
//    goto a;
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int num;
//    while(scanf("%d",&num) !=EOF)
//    {
//        if(num>999 || num<100)
//        {
//            printf("输入不合法，请重试。\n");
//            continue;
//        }
//        else
//        {
//            int ge,shi,bai;
//            ge = num%10;
//            shi= (num/10)%10;
//            bai= num/100;
//            if(num == ge*ge*ge+shi*shi*shi+bai*bai*bai)
//            {
//                printf("%d是水仙花数。\n",num);
//            }
//            else
//            {
//                printf("%d不是水仙花数。\n",num);
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int a,b,c;
//    float S,p;
// a: printf("请输入三角形的三边:");
//    scanf("%d%d%d",&a,&b,&c);
//    if(a+b<=c && a+c<=b && b+c<=a && a<=0 && b<=0 && c<=0)
//    {
//        printf("您输入的三角形三边不合法，请重新输入:\n");
//        goto a;
//    }
//    else
//    {
//        p = (float)(a+b+c)/2;
//        float tmp =p*(p-a)*(p-b)*(p-c);
//        S = sqrt(tmp);
//        printf("三角形三边为%d %d %d 的面积为%.2f\n",a,b,c,S);
//    }
//    return 0;
//}
//#include <stdio.h>
//int fun(int x,int y,int z)
//{
//	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	int i,sum=0;
//	for(i=0;i<y;i++)
//	{
//		sum=sum+a[i];
//	}
//	sum=sum+z;
//	if(x % 400 == 0 || x % 100 != 0 && x % 4 == 0)
//		sum=sum+1;
//	return  sum;
//}
//int main()
//{
//	int year,month,day;
//	printf("请输入年、月、日：\n");
//	scanf("%d %d %d",&year,&month,&day);
//	printf("%d年%d月%d日是该年的第%d天\n",year,month,day,fun(year,month,day));
////	getchar();
////	getchar();
//	return 0;
//}
//#include <stdio.h>
//int date(int x,int y,int z)
//{
//    int month[12]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
//    for(int i =0;i<y;i++)
//    {
//        sum+=month[i];
//    }
//    sum+=z;
//    if(x%100!=0 && x%4==0 || x%400==0)
//    {
//        sum+=1;
//        return sum;
//    }
//    else
//        return sum;
//}
//
//int main()
//{
//    int year,month,day;
//    printf("请输入年、月、日(数字用一个空格隔开):");
//    scanf("%d %d %d",&year,&month,&day);
//    printf("%d年%d月%d日这一天是%d年的第%d天。\n",year,month,day,year,date(year,month,day));
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//         for(int i=0;i<n;i++)
//         {
//             for(int j =0;j<n-1-i;j++)
//             {
//                 printf(" ");
//             }
//             printf("*\n");
//             printf("\n");
//         }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        for(int i=0;i<n;i++)
//        {
//            for(int j =0;j<=n-i;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        printf("* ");
//        for(int t =0 ;t<n;t++)
//        {
//            printf(" ");
//        }
//        printf("\n");
//        for(int l=0;l<n;l++)
//        {
//            for(int v=0;v<n+l;v++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//* * *
//* *
//*
//* *
//* * *
//#include <stdio.h>
//int main()
//{
//    int a,b,c,d;
//    scanf("%c%c%d,%d",&a,&b,&c,&d);
//    printf("%c,%c,%c,%c\n",a,b,c,d);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a=666,b=888;
//    printf("%d\n",a,b);
//    return 0;
//}
// #include <stdio.h>
//
//int main()
//{
//    int N,ch[10000];
//    scanf("%d",&N);
//    for(int i = 0;i<N;i++)
//    {
//        scanf("%d",&ch[i]);
//    }
//    for(int j = 0;j<N;j++)
//    {
//        int flag =1;
//        for(int h =0;h<N-1-j;h++)
//        {
//            if(ch[h]<ch[h+1])
//            {
//                int tmp=ch[h];
//                ch[h]=ch[h+1];
//                ch[h+1]=tmp;
//                flag=0;
//            }
//        }
//        if(flag== 1)
//            break;
//    }
//    printf("%d",ch[0]-ch[N-1]);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    for(int i = 0;i<=98;i++)
//    {
//        for(int j = 0;j<=98;j++)
//        {
//            if(386 == i*4 +j*2 && i+j == 98)
//            {
//                printf("鸡有%d只，兔有%d只\n",j,i);
//            }
//        }
//    }
//}
//#include <stdio.h>
//#define MAX 10000
//int Prime[MAX];
//int IsPrime(int n)
//{
//    int flag =1;
//    for(int i = 2;i<n;i++)
//    {
//        if(n%i == 0)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    return flag;
//}
//void Get_prime(int m)
//{
//	int sum = 0;
//	int flag = 1;
//	for(int i = 2; i <= m; i++){
//		flag = 1;
//		for(int j = 2; j*j <= i; j++)
//			if(i%j == 0)
//				flag = 0;
//		if(flag)
//			Prime[sum++] = i;
//	}
//}
//int main()
//{
//    int n,m;
//    Get_prime(10000);
//    scanf("%d %d",&n,&m);
//    for(int i = n; i<=m; i++)
//    {
//        printf("%d=",i);
//        if(IsPrime(i))//是素数
//        {
//            printf("%d\n",i);
//        }
//        else
//        {
//            int j = 0;//素数数组下标
//            while(i!=1)
//            {
//                if(i%Prime[j] == 0)
//                {
//                    i = i/Prime[j];
//                    if(i!=1)
//                    {
//                        printf("%d*",Prime[j]);
//                    }
//                    else
//                    {
//                        printf("%d",Prime[j]);
//                    }
//                }
//                else if(i%Prime[j] !=0)
//                {
//                    j++;
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}




