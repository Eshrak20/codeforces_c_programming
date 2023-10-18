#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char array[10001];
        scanf("%s", &array);
        int str_len = strlen(array);

        if (str_len <= 10)
        {
            printf("%s\n", array);
        }
        else
        {
            int sum = str_len - 2;
            printf("%c%d%c\n", array[0], sum, array[str_len - 1]);
        }
    }

    return 0;
}
