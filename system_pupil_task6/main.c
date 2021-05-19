#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define Min 1e-3

int main()
{
    int num_1,num_2,flag = 3;
    int sum = 0,count = 0,flag_1,flag_2;
    int i;
    float answer;
    srand(time(NULL));
    do{
    count = 0;
    printf("开始你的训练吧！\n");
    for(i = 0;i<10;i++)
    {
        num_1 = (rand()%10)+1;
        num_2 = (rand()%10)+1;
        flag_1 = (rand()%4+1);
        flag_2 = (rand()%4+1);
        if(flag_1 == 1){
            printf("%d * %d = ?\n",num_1,num_2);
            scanf("%f",&answer);
            if(answer == num_1*num_2)
            {
                printf("Right!\n");
                switch(flag_2)
                {
                    case 1:printf("Very good!\n");break;
                    case 2:printf("Excellent!\n");break;
                    case 3:printf("Nice work!\n");break;
                    case 4:printf("Keep up the good work!\n");break;
                }
                count++;
            }
            else
            {
                printf("Wrong\n");
                switch(flag_2)
                {
                    case 1:printf("No. Please try again.\n");break;
                    case 2:printf("Wrong. Try once more.\n");break;
                    case 3:printf("Don't give up!\n");break;
                    case 4:printf("Not correct Keep trying.\n");break;
                }
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
                    switch(flag_2)
                    {
                        case 1:printf("Very good!\n");break;
                        case 2:printf("Excellent!\n");break;
                        case 3:printf("Nice work!\n");break;
                        case 4:printf("Keep up the good work!\n");break;
                    }
                    count++;
                }
                else
                {
                    printf("Wrong\n");
                    switch(flag_2)
                    {
                        case 1:printf("No. Please try again.\n");break;
                        case 2:printf("Wrong. Try once more.\n");break;
                        case 3:printf("Don't give up!\n");break;
                        case 4:printf("Not correct Keep trying.\n");break;
                    }
                }
            }
            else
            {
                printf("%d - %d = ?\n",num_2,num_1);
                scanf("%f",&answer);
                if(answer == num_2-num_1)
                {
                    printf("Right!\n");
                    switch(flag_2)
                    {
                        case 1:printf("Very good!\n");break;
                        case 2:printf("Excellent!\n");break;
                        case 3:printf("Nice work!\n");break;
                        case 4:printf("Keep up the good work!\n");break;
                    }
                    count++;
                }
                else
                {
                    printf("Wrong\n");
                    switch(flag_2)
                    {
                        case 1:printf("No. Please try again.\n");break;
                        case 2:printf("Wrong. Try once more.\n");break;
                        case 3:printf("Don't give up!\n");break;
                        case 4:printf("Not correct Keep trying.\n");break;
                    }
                }
            }
        }
        if(flag_1 == 3){
            printf("%d + %d = ?\n",num_1,num_2);
            scanf("%f",&answer);
            if(answer == num_1+num_2)
            {
                printf("Right!\n");
                switch(flag_2)
                {
                    case 1:printf("Very good!\n");break;
                    case 2:printf("Excellent!\n");break;
                    case 3:printf("Nice work!\n");break;
                    case 4:printf("Keep up the good work!\n");break;
                }
                count++;
            }
            else
            {
                printf("Wrong\n");
                switch(flag_2)
                    {
                        case 1:printf("No. Please try again.\n");break;
                        case 2:printf("Wrong. Try once more.\n");break;
                        case 3:printf("Don't give up!\n");break;
                        case 4:printf("Not correct Keep trying.\n");break;
                    }
            }
        }
        if(flag_1 == 4){
            printf("%d / %d = ?(答案保留三位即可)\n",num_1,num_2);
            scanf("%f",&answer);
            if(fabs(answer -(float)num_1/num_2) < Min)
            {
                printf("Right!\n");
                switch(flag_2)
                {
                    case 1:printf("Very good!\n");break;
                    case 2:printf("Excellent!\n");break;
                    case 3:printf("Nice work!\n");break;
                    case 4:printf("Keep up the good work!\n");break;
                }
                count++;
            }
            else
            {
                printf("Wrong\n");
                switch(flag_2)
                {
                    case 1:printf("No. Please try again.\n");break;
                    case 2:printf("Wrong. Try once more.\n");break;
                    case 3:printf("Don't give up!\n");break;
                    case 4:printf("Not correct Keep trying.\n");break;
                }
            }
        }
    }
    printf("本次测验总分（100分计）为：%d分\n",count*10);
    printf("本次测验正确率为：%d.00%%\n",count*10);
    if(count*10 < 75)
        printf("小盆友，这次测验有点小瑕疵哦，让我们再训练一次吧\n\n\n");
    }while(count*10 < 75);
    printf("果然训练还是最好的提升手段呀，恭喜你通过这次训练\n奖励你一朵小红花！\n");
    return 0;
}
