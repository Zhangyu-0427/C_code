#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);

    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&x);
    for(i=0;i<n;i++)
            arr[i]^=x;//加密 如果arr[i] 与 x相同 则arr[i] = 0

    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
            printf("%d ",arr[i]^x);//解密
    }
    return 0;
}
