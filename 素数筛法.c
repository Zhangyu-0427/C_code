#include <stdio.h>

int main()
{
    int n = 0,arr[100];
    int i = 0,j = 0;
    int count = 0;
    scanf("%d",&n);
    for(i = 0;i<100;i++)
        arr[i] = i+1;
    for(i = 1;i<n;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(arr[j]%(i+1) == 0)
                arr[j] = 0;
        }
    }
    for(i = 1;i<n;i++)
    {
        if(arr[i] == 0)
            count++;
        else
            printf("%d ",arr[i]);
    }
    printf("\n%d",count);
    return 0;
}