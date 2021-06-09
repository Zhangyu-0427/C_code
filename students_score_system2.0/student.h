#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 30//最多三十位同学

typedef struct
{
    int ID;       //学号
    char name[20];//姓名
    int score[6];    //多门成绩
}STU;

void Input_from_file(STU arr[],int n);//录入数据

void Output(STU arr[],int n,int m);//输出数据

void cala_total_aver_of_couse(STU arr[],int n,int m);

void cala_total_aver_of_student(STU arr[],int n,int m);

void Sort_ID_recursion(STU arr[],int n,int m);//按学号排名

void Sort_Score_reverse(STU arr[],int n,int m);//按学生总分逆序排名

void Sort_Score_co(STU arr[],int n,int m);//按总分正序排序

void Search_ID(STU arr[],int n,int m);//按学号搜索信息

void Search_name(STU arr[],int n,int m);//按姓名搜索信息

void Sort_name(STU arr[],int n,int m);//按姓名排序

void grade_nums(STU arr[],int n,int m);//输出等级

void menu();
#endif // STUDENT_H_INCLUDED
