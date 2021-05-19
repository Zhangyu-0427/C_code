#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num_1,num_2,answer,flag = 3;
    int sum = 0,count = 0;
    int i;
    srand(time(NULL));
    printf("开始你的训练吧！\n");
    for(i = 0;i<10;i++)
    {
        num_1 = (rand()%10)+1;
        num_2 = (rand()%10)+1;
        printf("%d * %d = ?\n",num_1,num_2);
        scanf("%d",&answer);
        if(answer == num_1*num_2)
        {
            printf("Right!\n");
            count++;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    printf("本次测验总分（100分计）为：%d分\n",count*10);
    printf("本次测验正确率为：%.2f%%\n",count/10.0);
    return 0;
}
