//9876
#include "stdio.h"
int main()
{
    long int p, q, t = 0;
    for (q = 10; q < 1001; q++)
    {
        for (p = 1; p <q; p++)
        {
            if (q % p == 0)
            {
                t = t + p;
            }

        }
        if (q == t)
        {
            printf("%d ",t);
        }
        t = 0;                              //重置t值
    }
}
