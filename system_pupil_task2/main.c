#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num_1,num_2,answer,flag = 3;
    srand(time(NULL));
    do{
        if(flag < 3)
            printf("Wrong! Please try again.\n");
        num_1 = (rand()%10)+1;
        num_2 = (rand()%10)+1;
        printf("%d * %d = ?\n",num_1,num_2);
        scanf("%d",&answer);
        flag--;
    }while((num_1*num_2 != answer) && flag);
    if((num_1*num_2 == answer))
        printf("Right!\n");
    else
        printf("Wrong! You have tried three times! Test over!\n");
    return 0;
}
