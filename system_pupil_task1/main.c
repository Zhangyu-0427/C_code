#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num_1,num_2,answer,flag=0;
    srand(time(NULL));
    do{
        if(flag == 1)
            printf("Wrong! Please try again.\n");
        num_1 = (rand()%10)+1;
        num_2 = (rand()%10)+1;
        printf("%d * %d = ?\n",num_1,num_2);
        scanf("%d",&answer);
    }while((answer != num_1*num_2) && (flag=1));
    printf("Right!\n");
    return 0;
}
