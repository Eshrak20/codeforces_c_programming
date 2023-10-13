#include <stdio.h>

int main()
{
    char input; // A-Z = 65-90
    scanf("%c", &input);
    if (input == 90)
    {
        printf("%c", 65);
    }
    if (input == 122)
    {
        printf("%c", 97);
    }

    else
    {
        printf("%c", input + 1);
    }

    return 0;
}
