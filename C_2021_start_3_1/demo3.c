#include <stdio.h>

int main()
{
    int input =0;
    printf("加入字节跳动公司\n");
    printf("你要好好学习吗？(1/0)>:\n");
    scanf("%d",&input);
    if(input == 1)
        printf("好offer");
    else
        printf("搬砖");
    return 0;
}
