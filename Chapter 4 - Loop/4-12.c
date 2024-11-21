#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3 && j != i; j++)
        {
            for (int k = 1; k <= 3 && k != i && j != k; k++)
            {
                printf("%d, %d, %d\n", i, j, k);
            }
        }
    }
    return 0;
}