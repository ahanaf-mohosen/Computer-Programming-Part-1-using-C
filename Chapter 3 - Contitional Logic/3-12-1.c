
#include <stdio.h>
int main()
{
    char ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is vowel\n", ch);
    }
    {
        printf("%c is consonant\n", ch);
    }
    return 0;
}