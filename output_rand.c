#include <stdio.h>

int main()
{
    int l = 0, T = 0;
    scanf("%d",&T);

    for(l = 0; l<T; l++)
    {
        int arr[50][5];
        int n = 0, m = 0;
        int i = 0, j = 0;
        int sum = 0, flag = 0, ret_flag = 0;
        float aver[50][2];//1- 成绩  2- 学号
        scanf("%d %d",&n,&m);
        for(i = 0; i<n; i++)
        {
            for(j = 0; j<m; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        //计算平均成绩
        for(i = 0; i<n; i++)
        {
            flag = 0;
            sum = 0;
            for(j = 0; j<m; j++)
            {
                if(arr[i][j] >= 60)
                    flag++;
                sum += arr[i][j];
            }
            if(flag == m)//成绩均及格了
            {
                ret_flag++;
                aver[i][0] = (float)sum/m;//平均成绩
                aver[i][1] = i+1;        //存放学号
            }
        }
        for(i = 0; i<n - 1; i++)
        {
            flag = i;
            for(j = i+1; j<n; j++)
            {
                if(aver[j][0] > aver[flag][0])
                {
                    flag = j;
                }
            }
            float tmp = aver[i][0];
            aver[i][0] = aver[flag][0];
            aver[flag][0] = tmp;//成绩交换成功
            tmp = aver[i][1];
            aver[i][1] = aver[flag][1];
            aver[flag][1] = tmp;//学号交换成功
        }

        if(ret_flag == 0)
            printf("NULL\n");
        else
        {
            for(i = 0; i<n - 1; i++)
            {
                if(aver[i][0] == aver[i+1][0])//平均成绩相等
                {
                    if(aver[i][1] < aver[i+1][1])
                    {
                        float p = aver[i+1][1];
                        aver[i+1][1] = aver[i][1];
                        aver[i][1] = p;
                    }

                }
            }
            for(i = 0; i<ret_flag; i++)
            {
                printf("%.0f ",aver[i][1]);
            }
        }
    }
    return 0;
}
