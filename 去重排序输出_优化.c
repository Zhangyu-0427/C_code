#include <stdio.h>
//任意数据的去重排序输出
int cnt[100001];//利用索引值表示数据
int main()
{
    int n, a, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d",&a);
        cnt[a]++;
    }//下标为i的元素的值存储的是 数i 出现的次数
    for(i = 1; i <= n; i++)
        if(cnt[i]) printf("%d ", i);
    return 0;
}