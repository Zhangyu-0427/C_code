#include <stdio.h>

int main()
{
    int arr[10] = {1, 5, 9, 6, 2, 3, 4, 8, 10, 7};
    int i, k, j;
    int index, tmp;
    for( i = 1;i<10;i++)
    {
        tmp = arr[i];
        for( j = 0; j<i; j++)
        {
            if(arr[j] < tmp)
            {
                index = j;
                break;
            }
        }
        if(j != i)
        {
            for( k = i; k>index; k--)
            {
                arr[k] = arr[k-1];
            }
            arr[index] = tmp;
        }
    }
    for( i = 0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}
