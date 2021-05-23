#include <stdio.h>

int main()
{
    int n;
    int i, j, k;

    scanf("%d",&n);//接下来输入数据的个数

    int arr[n];
    for( i = 0; i<n; i++)
        scanf("%d",&arr[i]);

    //利用插入排序对数据进行升序排序
    for( i = 1; i<n; i++)
    {
        int tmp = arr[i];
        for( j = 0; j<i; j++)
        {
            if(arr[j] > arr[i])
                break;
        }
        for( k = i; k>j; k--)
        {
            arr[k] = arr[k-1];
        }
        arr[j] = tmp;
    }

    //接下来利用双指针进行去重操作
    int slow = 0, fast = 1;
    while(fast < n)
    {
        if(arr[fast] != arr[slow])
        {
            slow++;
            arr[slow] = arr[fast];
        }
        fast++;
    }

    //输出结果
    for( i = 0; i<slow+1; i++)
        printf("%d ",arr[i]);
    return 0;
}
//注:这套算法十分耗时,主要是排序和去重利用的算法不够精炼
//不过已经很不错了
