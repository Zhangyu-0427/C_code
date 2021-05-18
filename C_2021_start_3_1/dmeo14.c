#include <stdio.h>

int main()
{
    char arr[]="abcdef";
    int i=0;
    for(i;i<7;i++)
    {
        printf("%c\n",arr[i]);
    }
    printf("%d\n",arr[6]);
    return ;
}
