#include <stdio.h>

int my_strlen(char* p)
{
    int count = 0;
    while(*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}

void reverse_string(char arr[])
{
    char tmp = arr[0];
    int len = my_strlen(arr);
    arr[0] = arr[len-1];//第一步
    arr[len-1] = '\0';
    if(my_strlen(arr+1) > 1)
        reverse_string(arr+1);//第二步
    arr[len-1] = tmp;//第四步
}

int main()
{
    char arr[] = "uoy evol i";
    reverse_string(arr);
    printf("%s",arr);
    return 0;
}
