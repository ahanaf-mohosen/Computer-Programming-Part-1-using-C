#include <stdio.h>

int main()
{
    int rows = 6;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (2 * (rows - i) - 1); j++)
        {
            printf("c");
        }
        printf("\n");
    }

    for (int i = 1; i < rows; i++)
    {
        for (int j = 0; j < (rows - i - 1); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("c");
        }
        printf("\n");
    }

    return 0;
}
