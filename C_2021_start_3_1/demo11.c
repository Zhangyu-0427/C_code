#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3,5,6,7,8,9};
    int k = 4;
    int left = 0;
    int se = sizeof(arr)/sizeof(arr[0]);
    int right = se-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]<k)
        {
            left = mid+1;
        }
        else if(arr[mid]>k)
        {
            right = mid -1;
        }
        else
        {
            printf("�ҵ��ˣ��±�Ϊ:%d\n",mid);
            break;
        }

    }
    if(left>right)
    {
        printf("�Ҳ�����");
    }

    return 0;
}
