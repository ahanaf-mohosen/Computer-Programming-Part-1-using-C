#include <stdio.h>

int main(void)
{
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("");
        }
        for (int k = 0; k <= n - i; k++)
        {
            printf("c");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("");
        }
        for (int k = 1; k <= i + 1; k++)
        {
            printf("c");
        }
        printf("\n");
    }
    return 0;
}