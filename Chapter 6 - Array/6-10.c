#include <stdio.h>
int main()
{
    int i, j;
    int total_marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int marks_count[11];
    printf("1 2 3 4 5 6 7 8 9\n");
    printf("-----------------\n");
    for (i = 0; i < 11; i++)
    {
        marks_count[i] = 0;
    }
    for (i = 0; i < 12; i++)
    {
        marks_count[total_marks[i]]++;
        for (j = 1; j < 10; j++)
        {
            printf("%d ", marks_count[j]);
        }
        printf("\n");
    }
    return 0;
}