#include <stdio.h>

int main()
{
    int arr[31]={0,1,2,3},n,i;
    scanf("%d",&n);
    for(i = 4;i<=n;i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    printf("%d\n",arr[n]);
    for(i = 1;i<=n;i++)
    {
        printf("There are %5d steps required at %2d steps\n",arr[i],i);
    }
    return 0;
}
