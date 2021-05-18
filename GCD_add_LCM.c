#include <stdio.h>

int main()
{
    long int n,m,gcd,tmp,n_tmp,m_tmp;
    scanf("%ld %ld",&n,&m);
    n_tmp = n;
    m_tmp = m;
    
    while(m)  //以除数m作为while的判断条件
    {
        tmp = n%m;
        n   = m;
        m   = tmp;
    }
    
    gcd = n;//如果出 while 循环 则 m == 0 
            //所以 tmp == 0 根据辗转相除法 m 即为最大公约数
    
    printf("%ld",gcd+(m_tmp*n_tmp)/gcd);
    
    return 0;
}
