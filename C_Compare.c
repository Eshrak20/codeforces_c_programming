#include <stdio.h>

int main()
{
    char a[1001];
    char b[1001];
    scanf("%s %s", &a, &b);
    for (int i = 0;; i++)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (a[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (b[i] == '\0')
        {
            printf("%s", b);
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("%s", a);
            break;
        }
        else if (a[i] > b[i])
        {
            printf("%s", b);
            break;
        }
    }

    return 0;
}
