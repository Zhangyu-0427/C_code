#include <stdio.h>
#include <math.h>
int wei(int x)//位数
{
    int count = 0;
    while(x!=0)
    {
        x = x/10;
        if(x)
        {
            count++;
        }
    }
    return count+1;
}
int main()
{
    long int num_tmp,num,ch[100],tmp[100];
    int ret_num,i;
    while(scanf("%ld",&num)!=EOF)
    {
        long int sum=0,count=0;
a:
        num_tmp = num;
        ret_num = wei(num);//num的位数
        for(i = 0;i<ret_num;i++)
        {
            ch[i] = num_tmp % 10;
            num_tmp /=10;
            sum+=ch[i]*pow(10,ret_num-i-1);
        }
        if(sum != num)
        {
            tmp[count]=num;
            num = sum+num;//交换
            count++;
            goto a;
        }
        else if(num == sum)
        {
            tmp[count]=num;
        }
        if(count == 0)
        {
            printf("%d\n%ld",0,num);
        }
        else if(count > 0)
        {
            printf("%ld\n",count);
            for(i = 0;i<=count;i++)
            {
                printf("%ld",tmp[i]);
                if(i!=count)
                    printf("--->");
            }
        }
    }
    return 0;
}
