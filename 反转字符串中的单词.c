#include<stdio.h>
#include<string.h>
#define MAX 100000

void reverse(char arr[], int begin, int end)
{
	char temp;
	while(end >= begin)
    {
		temp = arr[begin];
		arr[begin] = arr[end];
		arr[end] = temp;
		begin++;
		end--;
	}
}

int main()
{
	int a = 0, b = 0,flag = 0;
	char s[MAX];
	while(gets(s))
    	{
	    reverse(s, 0, strlen(s)-1);
            int arr[2];
            int k = 0;
	    int i = 0;
        for(i =0;i<strlen(s);i++)
        {
            if(s[i] != ' '){
                arr[0] = i-1;//首空格
                break;
            }
        }
        for(i =strlen(s) - 1;i>=0;i--)
        {
            if(s[i] != ' '){
                arr[1] = i+1;//末空格
                break;
            }
        }
        //反转单词
        i = 0;
    	while(i < strlen(s))
	{
	    //跳过空格
	    while(s[i] == ' ' && i < strlen(s))
	    {
		    i++;
	    }
	    a = i;
	    //跳过非空格字符
	    while(s[i] != ' ' && i < strlen(s))
	    {
		    i++;
	    }
	    b = i-1;
	    //a~b为一个单词的下标的区间
	    reverse(s,a,b);
    	}
	//输出反转后的单词序列
        for( i =0 ; i<strlen(s);i++)
        {
            if(s[i] == ' ' && flag == 0)
            {
                if(i<= arr[0] || i>=arr[1])
                {
                    continue;
                }
                else
                {
                    printf("%c",s[i]);//输出一个空格，直到出现一个非空格的字符
                    flag = 1;
                }
            }
            else if(s[i] != ' ')
            {
                printf("%c",s[i]);
                flag = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
