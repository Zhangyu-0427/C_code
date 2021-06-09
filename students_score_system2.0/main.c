#include "student.h"

int main()
{
    int n = 0, m = 0, flag = 0, k = 0;
    STU student[M];

    do
    {
        printf("请输入需要录入学生的数量(不大于30位),以及本学期的课程数量(不大于6门): \n");
        scanf("%d %d",&n,&m);
        if( n <= 30 && n > 0 && m > 0 && m <= 6)
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
        Input_from_file(student,n);//从文件中向结构体数组读入数据
        menu();
        printf("-->>请选择您需要的功能前的序号: ");
        scanf("%d",&effective_case);
        switch(effective_case)
        {
            menu();
            case 1:Input_from_file(student,n);break;

            case 2:cala_total_aver_of_couse(student,n,m);break;

            case 3:cala_total_aver_of_student(student,n,m);break;

            case 4:Sort_Score_reverse(student,n,m);break;

            case 5:Sort_Score_co(student,n,m);break;

            case 6:Sort_ID_recursion(student,n,m);break;

            case 7:Sort_name(student,n,m);break;

            case 8:Search_ID(student,n,m);break;

            case 9:Search_name(student,n,m);break;

            case 10:grade_nums(student,n,m);break;

            case 11:Output(student,n,m);break;

            case 0:printf("感谢本次使用该系统！");exit(0);

            default:printf("无此功能！！！\n");break;
        }
        printf("是否还需要进行操作(如果是请输入1，否则默认结束程序)？\n");
        scanf("%d",&k);
    }while( k == 1);
    printf("感谢本次使用该系统！");
    return 0;
}
