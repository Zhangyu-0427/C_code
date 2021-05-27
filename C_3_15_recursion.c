#include <stdio.h>

void print(int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%d ",n%10);
}


int main()
{
    int num;
    scanf("%d",&num);
    print(num);
    return 0;
}
