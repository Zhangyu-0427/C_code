#include <stdio.h>

int main()
{
    int arr[10] = {1, 5, 9, 6, 2, 3, 4, 8, 10, 7};
    int i, j;
    int tmp, Index_Min;

    for( i = 0; i<9; i++ )
    {
        Index_Min = i;

        for( j = i+1; j<10; j++ )
        {
            if( arr[j] < arr[Index_Min] )
            {
                Index_Min = j;
            }
        }

        tmp = arr[i];
        arr[i] = arr[Index_Min];
        arr[Index_Min] = tmp;
    }

    for( i = 0; i<10; i++)
        printf("%d ",arr[i]);
    return 0;
}
