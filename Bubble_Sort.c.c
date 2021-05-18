#include <stdio.h>

int main()
{
    int arr[10] = {1, 5, 9, 6, 2, 3, 4, 8, 10, 7};
    int i, j;
    int tmp;
    for( i = 0; i < 9; i++ )
    {
        int flag = 1;
        for( j = 0; j < 9-i; j++ )
        {
            if(arr[j]<arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 0;
            }
        }
        if(flag)
            break;
    }
    for(i = 0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}
