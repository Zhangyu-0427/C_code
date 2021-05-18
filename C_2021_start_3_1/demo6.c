#define ADD(x, y) (x+y)
#include <stdio.h>
int main()
{
    int sum = ADD(2, 3);
    printf("sum = %d\n", sum);
    sum = 10*ADD(2, 3);
    printf("sum = %d\n", sum);
    return 0;
}

