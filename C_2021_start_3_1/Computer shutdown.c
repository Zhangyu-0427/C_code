#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20]={0};
    //shutdown -s-t 60
    //system()-ִ��ϵͳ����
    system("shutdown -s -t 60");
again:
    printf("���ĵ��Խ���һ���Ӻ�ر�,������룺��������ȡ���ػ�\n");
    printf("������:>");
    scanf("%s",input);
    if(strcmp(input,"������") == 0)//�Ƚ������ַ����õ�-strcmp����
    {
        system("shutdown -a");
        printf("���ˣ��ػ���ȡ���ˣ�������������Ŷ��\n");
    }
    else
    {
        goto again;
    }
    return 0;
}
