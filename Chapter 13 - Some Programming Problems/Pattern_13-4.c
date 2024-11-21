#include <stdio.h>

int main()
{
    int rows = 10;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("c");
        }

        for (int j = 0; j < (rows - i) * 2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("c");
        }
        printf("\n");
    }
    return 0;
}
