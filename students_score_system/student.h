#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define M 30//最多三十位同学

typedef struct
{
    int ID;       //学号
    char name[20];//姓名
    int score;    //一门成绩
}STU;

void Input_from_file(STU arr[],int n);
void Output_to_file(STU arr[],int n);
void Sort_ID_recursion(STU arr[],int n);
void Sort_Score_reverse(STU arr[],int n);
void Serach_ID(STU arr[],int n);
void grade_nums(STU arr[],int n);
void menu();
#endif // STUDENT_H_INCLUDED
