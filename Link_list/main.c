#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int date;//数据域
    struct Node* Next;//指针域
}Node;//重定义结构体类型名

int main()
{
    int n = 0, date = 0, i = 0;
    Node* p_head = NULL;
    Node* p_tmp  = NULL;
    Node* Print_P= NULL;
    printf("请输入单向链表中结点的个数:>");
    scanf("%d",&n);

    //单向链表的创建
    for(i = 0; i<n; i++)
    {
        Node* p_node = (Node *)malloc(sizeof(Node));//创建结点
        printf("请填充第%d个结点中的数据域:\n",i+1);

        scanf("%d",&date);
        p_node->date = date;
        p_node->Next = NULL;

        if(p_node == NULL)
        {
            printf("出错！");
            break;
        }
        if(i == 0)
        {
            p_head = p_node;//记录头指针
            p_tmp  = p_node;//当前的结构体指针
            Print_P= p_node;
        }
        else
        {
            p_tmp->Next = p_node;//上一个结点的指针域赋值为当前结点的地址
            p_tmp = p_node;//同时结构体样本指针指向当前结点的地址
        }
    }
    //单向链表的遍历
    while(Print_P != NULL)
    {
        printf("%d ",Print_P->date);
        Print_P = Print_P->Next;
    }
    return 0;
}
