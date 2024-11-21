#include <stdio.h>
int main()
{
    int a, b, x, gcd;
    scanf("%d %d", &a, &b);

    for (x = (a < b) ? a : b; x >= 1; x--)
    {
        if (a % x == 0 && b % x == 0)
        {
            gcd = x;
            break;
        }
    }
    printf("GCD is %d\n", gcd);
    return 0;
}