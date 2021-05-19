#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define Min 1e-3

int main()
{
    int num_1,num_2,flag = 3;
    int sum = 0,count = 0,flag_1;
    int i;
    float answer;
    srand(time(NULL));
    printf("开始你的训练吧！\n");
    for(i = 0;i<10;i++)
    {
        num_1 = (rand()%10)+1;
        num_2 = (rand()%10)+1;
        flag_1 = (rand()%4+1);
        if(flag_1 == 1){
            printf("%d * %d = ?\n",num_1,num_2);
            scanf("%f",&answer);
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
        if(flag_1 == 2){
            if(num_1 >= num_2)
            {
                printf("%d - %d = ?\n",num_1,num_2);
                scanf("%f",&answer);
                if(answer == num_1-num_2)
                {
                    printf("Right!\n");
                    count++;
                }
                else
                {
                    printf("Wrong\n");
                }
            }
            else
            {
                printf("%d - %d = ?\n",num_2,num_1);
                scanf("%f",&answer);
                if(answer == num_2-num_1)
                {
                    printf("Right!\n");
                    count++;
                }
                else
                {
                    printf("Wrong\n");
                }
            }
        }
        if(flag_1 == 3){
            printf("%d + %d = ?\n",num_1,num_2);
            scanf("%f",&answer);
            if(answer == num_1+num_2)
            {
                printf("Right!\n");
                count++;
            }
            else
            {
                printf("Wrong\n");
            }
        }
        if(flag_1 == 4){
            printf("%d / %d = ?(答案保留三位即可)\n",num_1,num_2);
            scanf("%f",&answer);
            if(fabs(answer -(float)num_1/num_2) < Min)
            {
                printf("Right!\n");
                count++;
            }
            else
            {
                printf("Wrong\n");
            }
        }
    }
    printf("本次测验总分（100分计）为：%d分\n",count*10);
    printf("本次测验正确率为：%d.00%%\n",count*10);
    return 0;
}
