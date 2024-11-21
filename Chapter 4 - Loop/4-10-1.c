#include <stdio.h>
int main()
{
    int n, i;
    for (n = 1; n <= 20; n = n + 1)
    {
        int m = 0;
        int nn = n;
        for (i = 1; i <= 10; i = i + 1)
        {
            m += nn;
            printf("%d X %d = %d\n", n, i, m);
        }
        printf("---------------------------------\n");
    }
    return 0;
}