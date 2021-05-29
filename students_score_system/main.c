#include "student.h"

int main()
{
    int n = 0,flag = 0,k = 0;
    STU student[M];

    do
    {
        printf("请输入需要录入学生的数量(不大于30位): ");
        scanf("%d",&n);
        if( n <= 30 && n > 0)
        {
            break;
        }
        else
        {
            printf("输入学生数量时出错，请检查是否输入错误\n");
            printf("同时您是否需要重新输入学生数量(如果是请输入1,否则默认结束程序)？\n");
            printf("请输入: ");
            scanf("%d",&flag);
            if(flag == 1)
                continue;
            else
                exit(0);
        }
    }while(1);   //输入已解决

    do
    {
        int effective_case;
        //Input_from_file(student,n,K);//从文件中向结构体数组读入数据
        menu();
        printf("-->>请选择您需要的功能前的序号: ");
        scanf("%d",&effective_case);
        switch(effective_case)
        {
            menu();
            case 0:Input_from_file(student,n);break;
            case 1:Output_to_file(student,n);break;
            case 2:Sort_ID_recursion(student,n);break;
            case 3:Sort_Score_reverse(student,n);break;
            case 4:Serach_ID(student,n);break;
            case 5:grade_nums(student,n);break;
            default:printf("无此功能！！！\n");break;
        }
        printf("是否还需要进行操作(如果是请输入1，否则默认结束程序)？\n");
        scanf("%d",&k);
    }while( k == 1);
    printf("感谢本次使用该系统！");
    return 0;
}
