#include <stdio.h>

int main()
{
    int num = 77;
    int quotient, product, result;

    quotient = num / 2;
    product = quotient * 2;
    result = num - product;

    if (result == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }

    return 0;
}
