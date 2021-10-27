#include "stdio.h"
int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 5-i; j > 0; j--)
            printf(" ");
        for (j = 1; j <= 2 * i-1; j++)
            printf("%c", 'A' + i-1);
        printf("\n");
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i + 1; j++)
            printf(" ");
        for (j = 7-2*i; j > 0; j--)
            printf("%c", 'D' - i);
        printf("\n");
    }
}
