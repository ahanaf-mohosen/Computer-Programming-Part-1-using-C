#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
    {
        return a;
    }
    else if (b == 0)
    {
        return b;
    }
    else
    {
        int t;
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
            printf("a=%d, b=%d\n", a, b);
        }
        return a;
    }
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("LCM is %d\n", lcm(a, b));

    return 0;
}
