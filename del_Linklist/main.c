#include <stdio.h>
#include <stdlib.h>

//定义结点
typedef struct S
{
    int date;
    struct S* Next;
}Node;

Node* Creat_Link_list(int cnt);//创建链表 返回头指针
void Print_Link_list(Node* head);//打印链表
Node* del_Node(Node* p, int del_num);//删除链表中的结点


int main()
{
    int N = 0, delnum = 0;
    printf("输入需要创建结点的个数:>");
    scanf("%d",&N);

    Node* p_head = Creat_Link_list(N);//返回头指针用p_head接收
    Print_Link_list(p_head);
    printf("输入删除结点的数据:>");
    scanf("%d",&delnum);
    Node* New_head = del_Node(p_head,delnum);
    Print_Link_list(New_head);
    return 0;
}


Node* Creat_Link_list(int cnt)
{
    Node* head = NULL;
    Node* tmp  = NULL;
    for(int i = 0; i<cnt; i++)
    {
        Node* p = (Node*)malloc(sizeof(Node));
        if(p == NULL)
        {
            printf("异常，自动结束程序!");
            exit(0);
        }
        p->date = i+1;
        p->Next = NULL;
        if(i == 0)
        {
            head = p;
            tmp  = p;
        }
        else
        {
            tmp->Next = p;
            tmp = p;
        }
    }
    printf("链表创建成功。\n");
    return head;
}
void Print_Link_list(Node* head)
{
    printf("链表打印结果为:>\n");
    while(head != NULL)
    {
        printf("%d ",head->date);
        head = head->Next;
    }
    printf("\n");
}
Node* del_Node(Node* head, int del_num)
{
    //p & pre 视为前后指针
    Node* p = head, *pre = head;

    //处理特殊情况
    if(head == NULL)
    {
        printf("为空链表！");
        return NULL;
    }
    //遍历链表找到需要判断的结点
    while (del_num != p->date && p->Next != NULL)
    {
        pre = p;            /* pre保存当前节点 */
        p = p->Next;    /* p指向当前节点的下一节点 */
    }
    //判断循环的出口
    if (del_num == p->date)
    {
        if (p == head)    /* 如果待删除为头节点 （注意头指针和头结点的区别）*/
        {
            head = p->Next;//也可以使用 head = pre->next
        }
        else            /* 如果待删除不是头节点 */
        {
            pre->Next = p->Next;
        }
        free(p);        /* 释放已删除节点的内存 */
        printf("删除成功!");
    }
    else            /* 未发现节点值为nodeData的节点 */
    {
        printf("This Node has not been found\n");
    }

    return head;
}
