#include <stdio.h>

int main()
{
    long int n,m,gcd,tmp,n_tmp,m_tmp;
    scanf("%ld %ld",&n,&m);
    n_tmp = n;
    m_tmp = m;
    while(m)
    {
        tmp = n%m;
        n   = m;
        m   = tmp;
    }
    gcd = n;
    printf("%ld",gcd+(m_tmp*n_tmp)/gcd);
    return 0;
}