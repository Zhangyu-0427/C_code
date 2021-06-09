#include "student.h"

void menu()
{

    printf("*****   1. Input record                                               *****\n");
    printf("*****   2. Caculate total and average score of every course           *****\n");
    printf("*****   3. Caculate total and average score of every student          *****\n");
    printf("*****   4. Sort in descending order by total score of every student   *****\n");
    printf("*****   5. Sort in ascending order by total score of every student    *****\n");
    printf("*****   6. Sort in ascending order by number                          *****\n");
    printf("*****   7. Sort in dictionary order by name                           *****\n");
    printf("*****   8. Search by number                                           *****\n");
    printf("*****   9. Search by name                                             *****\n");
    printf("*****   10.Statistic analysis for every course                        *****\n");
    printf("*****   11.List record                                                *****\n");
    printf("*****   0.  退出系统！        *****\n");
}

void Input_from_file(STU arr[], int n)
{
    FILE *fp = NULL;
    int i = 0;
    if((fp = fopen("student.txt","r")) == NULL)
    {
        printf("文件打开失败！程序异常终止。");
        exit(0);
    }
    for( i = 0; i<n; i++ )
    {
        fscanf(fp,"%d %s %d %d %d %d %d %d",&arr[i].ID,arr[i].name,&arr[i].score[0],&arr[i].score[1],&arr[i].score[2],&arr[i].score[3],&arr[i].score[4],&arr[i].score[5]);
    }
}


void Output(STU arr[],int n,int m)
{
    int i = 0, j = 0;
    for( i = 0; i<n; i++ )
    {
        printf("学号: %d 姓名: %-6s ",arr[i].ID,arr[i].name);
        for(j = 0; j<m; j++)
        {
            if(j == 0)
                printf("成绩: %-3d",arr[i].score[j]);
            else
                printf(" 成绩: %-3d",arr[i].score[j]);
        }
        printf("\n");
    }
    cala_total_aver_of_couse(arr,n,m);
}


void Sort_ID_recursion(STU arr[],int n,int m)//已实现
{
    int i, j, flag;
    for( i = 0; i<n-1; i++)
    {
        flag = i;
        for(j = i+1; j<n; j++)
        {
            if(arr[j].ID<arr[flag].ID)
                flag = j;
        }
        if(flag != i)
        {
              STU temp;
              STU *p,*q;

              p=&arr[flag];
              q=&arr[i];

              temp=*p;
              p=q;
              q=&temp;

              arr[flag]=*p;
              arr[i]=*q;
        }
    }
    for(i = 0; i<n; i++)
    {
        switch(m)
        {
            case 1:printf("学号: %d,成绩 1: %-3d\n",arr[i].ID,arr[i].score[0]);
                break;
            case 2:printf("学号: %d,成绩 1: %-3d,成绩 2: %-3d\n",arr[i].ID,arr[i].score[0],arr[i].score[1]);
                break;
            case 3:printf("学号: %d,成绩 1: %-3d,成绩 2: %-3d,成绩 3: %-3d\n",arr[i].ID,arr[i].score[0],arr[i].score[1],arr[i].score[2]);
                break;
            case 4:printf("学号: %d,成绩 1: %-3d,成绩 2: %-3d,成绩 3: %-3d,成绩 4: %-3d\n",arr[i].ID,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3]);
                break;
            case 5:printf("学号: %d,成绩 1: %-3d,成绩 2: %-3d,成绩 3: %-3d,成绩 4: %-3d,成绩 5: %-3d\n",arr[i].ID,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3],arr[i].score[4]);
                break;
            case 6:printf("学号: %d,成绩 1: %-3d,成绩 2: %-3d,成绩 3: %-3d,成绩 4: %-3d,成绩 5: %-3d,成绩 6: %-3d\n",arr[i].ID,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3],arr[i].score[4],arr[i].score[5]);
                break;
        }
    }

}


void Sort_Score_reverse(STU arr[],int n,int m)
{
    int i, j, k, flag, sum = 0;
    int q = 0, h = 0;
    for( i = 0; i<n-1; i++)
    {
        flag = i;
        for(j = i+1; j<n; j++)
        {
            q = 0;
            h = 0;
            for(k = 0; k<m; k++)
            {
                q += arr[j].score[k];
                h += arr[flag].score[k];
            }
            if(q > h)
                flag = j;
        }
        if(flag != i)
        {
              STU temp;
              STU *p,*q;

              p=&arr[flag];
              q=&arr[i];

              temp=*p;
              p=q;
              q=&temp;

              arr[flag]=*p;
              arr[i]=*q;
        }
    }
    for( i =0 ;i<n; i++)
    {
        sum = 0;
        for(j = 0; j<m; j++)
            sum += arr[i].score[j];
        printf("名次: 第%2d名,学号: %d,姓名: %-6s,总分: %d\n",i+1,arr[i].ID,arr[i].name,sum);
    }
}

void Sort_Score_co(STU arr[],int n,int m)
{
    int i, j, k, flag, sum = 0;
    int q = 0, h = 0;
    for( i = 0; i<n-1; i++)
    {
        flag = i;
        for(j = i+1; j<n; j++)
        {
            q = 0;
            h = 0;
            for(k = 0; k<m; k++)
            {
                q += arr[j].score[k];
                h += arr[flag].score[k];
            }
            if(q < h)
                flag = j;
        }
        if(flag != i)
        {
              STU temp;
              STU *p,*q;

              p=&arr[flag];
              q=&arr[i];

              temp=*p;
              p=q;
              q=&temp;

              arr[flag]=*p;
              arr[i]=*q;
        }
    }
    for( i =0 ;i<n; i++)
    {
        sum = 0;
        for(j = 0; j<m; j++)
            sum += arr[i].score[j];
        printf("名次: 第%2d名,学号: %d,姓名: %-6s,总分: %d\n",n-i,arr[i].ID,arr[i].name,sum);
    }

}

void Search_ID(STU arr[],int n,int m)
{
    int id, i, j, k;
    int sum_1 = 0, sum_2 = 0;
    int rand = 0, flag = 0;
    printf("请输入您需要查找学生的学号:> ");
    scanf("%d",&id);
    for( i = 0; i<n; i++ )
    {
        if(arr[i].ID == id)
        {
            flag++;
            for(j = 0; j<n; j++)
            {
                if(j != i)
                {
                    sum_1 = sum_2 = 0;
                    for(k = 0; k<m; k++)
                    {
                        sum_1 += arr[j].score[k];
                        sum_2 += arr[i].score[k];//基准学生
                    }
                    if(sum_1 > sum_2)
                        rand++;
                }
            }
        }
        if(j == n)
        {
            switch(m)
            {
                case 1:printf("该名学生的排名为第%2d名，考试成绩为 %-3d\n",rand+1,arr[i].score[0]);
                    break;
                case 2:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1]);
                    break;
                case 3:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2]);
                    break;
                case 4:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3]);
                    break;
                case 5:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3],arr[i].score[4]);
                    break;
                case 6:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3],arr[i].score[4],arr[i].score[5]);
                    break;
            }
            break;
        }
    }
    if(flag == 0)
        printf("暂无学号为%d该同学的信息\n\n",id);
}

void Search_name(STU arr[],int n,int m)
{
    char name_1[20];
    int i, j, k;
    int sum_1 = 0, sum_2 = 0;
    int rand = 0,flag = 0;
    printf("请输入您需要查找学生的姓名:> ");
    getchar();
    gets(name_1);
    for( i = 0; i<n; i++ )
    {
        if( strcmp(arr[i].name,name_1) == 0 )
        {
            flag++;
            for(j = 0; j<n; j++)
            {
                if(j != i)
                {
                    sum_1 = sum_2 = 0;
                    for(k = 0; k<m; k++)
                    {
                        sum_1 += arr[j].score[k];
                        sum_2 += arr[i].score[k];//基准学生
                    }
                    if(sum_1 > sum_2)
                        rand++;
                }
            }
            if(j == n)
            {
                switch(m)
                {
                    case 1:printf("该名学生的排名为第%2d名，考试成绩为 %-3d\n",rand+1,arr[i].score[0]);
                        break;
                    case 2:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1]);
                        break;
                    case 3:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2]);
                        break;
                    case 4:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3]);
                        break;
                    case 5:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3],arr[i].score[4]);
                        break;
                    case 6:printf("该名学生的排名为第%2d名，考试成绩为 %-3d %-3d %-3d %-3d %-3d %-3d\n",rand+1,arr[i].score[0],arr[i].score[1],arr[i].score[2],arr[i].score[3],arr[i].score[4],arr[i].score[5]);
                        break;
                }
                break;
            }
        }
    }
    if(flag == 0)
        printf("暂无姓名为%-6s这名同学的信息！\n",name_1);
}

void grade_nums(STU arr[],int n,int m)
{
    int i, j, grade[6][5] = {0};
    float a = 0,b = 0,c = 0,d = 0,e = 0;
    float A,B,C,D,E;

    for( i = 0; i<m ;i++)//科目数
    {
        for(j = 0; j<n; j++)//遍历学生信息
        {
            if(arr[j].score[i]<=100 && arr[j].score[i]>90)
                grade[i][0]++;
            else if(arr[j].score[i]<=90 && arr[j].score[i]>80)
                grade[i][1]++;
            else if(arr[j].score[i]<=80 && arr[j].score[i]>70)
                grade[i][2]++;
            else if(arr[j].score[i]<=70 && arr[j].score[i]>60)
                grade[i][3]++;
            else
                grade[i][4]++;
        }
    }
    for(i = 0; i<m; i++)
    {
        printf("课程%d: A:人数:%2d(%05.2f%%), B:人数:%2d(%05.2f%%), C:人数:%2d(%05.2f%%), D:人数:%2d(%05.2f%%), E:人数:%2d(%05.2f%%)\n",i+1,grade[i][0],(float)grade[i][0]*100/n,grade[i][1],(float)grade[i][1]*100/n,grade[i][2],(float)grade[i][2]*100/n,grade[i][3],(float)grade[i][3]*100/n,grade[i][4],(float)grade[i][4]*100/n);
    }
}

void cala_total_aver_of_couse(STU arr[],int n,int m)
{
    int i = 0,sum[m],j = 0;
    float aver[m];
    //计算
    for(i = 0; i<m; i++)
    {
        sum[i]  = 0;
        aver[i] = 0;
        for(j = 0; j<n; j++)
        {
            sum[i] += arr[j].score[i];
        }
        aver[i] = (float)sum[i]/n;
    }
    //输出
    for(i = 0; i<m; i++)
        printf("第%d门成绩的总分:%3d,平均分:%.2f\n",i+1,sum[i],aver[i]);
}

void cala_total_aver_of_student(STU arr[],int n,int m)
{
    int i = 0, sum[n], j = 0;
    float aver[n];
    //计算
    for(i = 0; i<n; i++)
    {
        sum[i]  = 0;
        aver[i] = 0;
        for(j = 0; j<m; j++)
        {
            sum[i] += arr[i].score[j];
        }
        aver[i] = (float)sum[i]/m;
    }
    //输出
    for(i = 0; i<n; i++)
        printf("第%2d名同学: 总分为:%d,平均分:%.2f\n",i+1,sum[i],aver[i]);
}

void Sort_name(STU arr[],int n,int m)
{
    int i, j, k, flag;
    for( i = 0; i<n-1; i++)
    {
        flag = i;
        for(j = i+1; j<n; j++)
        {
            if(strcmp(arr[flag].name,arr[j].name))
                flag = j;
        }
        if(flag != i)
        {
              STU temp;
              STU *p,*q;

              p=&arr[flag];
              q=&arr[i];

              temp=*p;
              p=q;
              q=&temp;

              arr[flag]=*p;
              arr[i]=*q;
        }
    }
    for(i = 0; i<n; i++)
    {
        printf("名次: 第%2d,姓名: %-6s,学号: %d, 成绩: ",i+1,arr[i].name,arr[i].ID);
        for(k = 0; k<m; k++)
        {
            if(k == 0)
                printf("%-3d",arr[i].score[k]);
            else
                printf(" %-3d",arr[i].score[k]);
        }
        printf("\n");
    }

}

