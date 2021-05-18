#include <stdio.h>

int main()
{
    int i;
    int a;
    int s=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s = s*i;
    }
    printf("s=%d\n",s);
    return 0;
}
