#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20]={0};
    //shutdown -s-t 60
    //system()-执行系统命令
    system("shutdown -s -t 60");
again:
    printf("您的电脑将在一分钟后关闭,如果输入：我是猪，就取消关机\n");
    printf("请输入:>");
    scanf("%s",input);
    if(strcmp(input,"我是猪") == 0)//比较两个字符串用到-strcmp函数
    {
        system("shutdown -a");
        printf("好了，关机被取消了，别忘了你是猪哦。\n");
    }
    else
    {
        goto again;
    }
    return 0;
}
