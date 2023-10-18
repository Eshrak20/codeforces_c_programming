#include <stdio.h>
#include <string.h>

int main()
{
    char a[100005];
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {

        if (a[i] == ',')
        {
            a[i] = ' ';
        }
        else if (a[i] >= 65 && a[i] < 97)
        {
            a[i] = a[i] + 32;
        }
        else
        {
            a[i] = a[i] - 32;
        }
    }
    printf("%s", a);

    return 0;
}
// fgets(a, 100005, stdin);
