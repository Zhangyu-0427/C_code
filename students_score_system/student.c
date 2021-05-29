#include "student.h"
void menu()
{
    printf("----------------请选择功能前对应的序号------------------\n");
    printf("-----0.录入每个学生的学号(四位,例如1001)、姓名、一科成绩\n");
    printf("-----1.输出每个学生的学号、姓名、成绩,课程总分、平均分--\n");
    printf("-----2.按学号由小到大排出成绩表-------------------------\n");//排序完之后输出
    printf("-----3.按成绩由高到低排出名次表-------------------------\n");//排序完之后输出
    printf("-----4.按学号查询学生排名及其考试成绩-------------------\n");
    printf("-----5.输出按百分制的五大等级的人数以及所占比-----------\n");
    printf("--------------------------------------------------------\n");
    printf("\n");
}

void Input_from_file(STU arr[],int n)
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
        fscanf(fp,"%d %s %d",&arr[i].ID,arr[i].name,&arr[i].score);
    }
}


void Output_to_file(STU arr[],int n)
{
    int i,sum = 0;
    float aver = 0;
    FILE *fp =NULL;
    if((fp = fopen("Ouput_student_information.txt","w")) == NULL)
    {
        printf("文件打开失败！程序异常终止。");
        exit(0);
    }
    for( i = 0; i<n; i++ )
    {
        fprintf(fp,"学号: %d 姓名: %s 成绩: %d\n",arr[i].ID,arr[i].name,arr[i].score);
        sum += arr[i].score;
    }
    aver = sum/n;
    fprintf(fp,"以上%d位同学的总课程成绩为%d，平均成绩为%.2f",n,sum,aver);

}


void Sort_ID_recursion(STU arr[],int n)
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
        printf("学号: %d,成绩: %d\n",arr[i].ID,arr[i].score);

}


void Sort_Score_reverse(STU arr[],int n)
{
    int i, j, flag;
    for( i = 0; i<n-1; i++)
    {
        flag = i;
        for(j = i+1; j<n; j++)
        {
            if(arr[j].score>arr[flag].score)
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
        printf("成绩: %d,学号: %d\n",arr[i].score,arr[i].ID);
}


void Serach_ID(STU arr[],int n)
{
    int id,i,j;
    int rand = 0;
    printf("请输入您需要查找学生的学号:> ");
    scanf("%d",&id);
    for( i = 0; i<n; i++ )
    {
        if(arr[i].ID == id)
        {
            for(j = 0; j<n; j++)
            {
                if(j != i)
                    if(arr[j].score>arr[i].score)
                        rand++;
            }
        }
        if( j == n)
        {
            printf("该名学生的排名为班级第%d名,考试成绩为%d\n",rand+1,arr[i].score);
            break;
        }
    }
    if(rand == 0)
        printf("暂无学号为%d该同学的信息\n\n",id);
}


void grade_nums(STU arr[],int n)
{
    int i;
    float a = 0,b = 0,c = 0,d = 0,e = 0;
    float A,B,C,D,E;

    for( i = 0; i<n ;i++)
    {
        if(arr[i].score<=100 && arr[i].score>90)
            a++;
        else if(arr[i].score<=90 && arr[i].score>80)
            b++;
        else if(arr[i].score<=80 && arr[i].score>70)
            c++;
        else if(arr[i].score<=70 && arr[i].score>60)
            d++;
        else
            e++;
    }
    A = a/n;B = b/n;C = c/n;D = d/n;E = e/n;
    printf("本次考试班级中达A级的人数为%.0f,占比%.2f%%\n",a,A*100);
    printf("本次考试班级中达B级的人数为%.0f,占比%.2f%%\n",b,B*100);
    printf("本次考试班级中达C级的人数为%.0f,占比%.2f%%\n",c,C*100);
    printf("本次考试班级中达D级的人数为%.0f,占比%.2f%%\n",d,D*100);
    printf("本次考试班级中达E级的人数为%.0f,占比%.2f%%\n",e,E*100);
    printf("\n");
}
