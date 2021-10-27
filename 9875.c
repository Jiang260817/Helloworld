//9875
#include "stdio.h"
int main()
{
    long long int n,p,q,sum1,sum2;
    scanf("%lld", &n);
    for (sum1 = p = 0; p <= n; p++)
    {
        for (q = sum2 = 0; q <= p; q++)
        {
            sum2 = sum2 + q;
        }
        sum1 = sum2 + sum1;
    }
    printf("%lld",sum1);
}
