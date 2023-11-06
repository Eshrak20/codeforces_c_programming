#include <stdio.h>
#include <string.h>
int sum = 0;
int fun(char *ch, int i)
{
    // base case
    if (ch[i] == '\0')
    {
        return 0;
    }
    if (ch[i] >= 'A' && ch[i] <= 'Z')
    {
        ch[i] = ch[i] + 32;
    }

    if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
    {
        sum++;
    }
    fun(ch, i + 1);
}
int main()
{
    char x[1001];
    fgets(x, 1001, stdin);
    int count = fun(x, 0);
    printf("%d", sum);

    return 0;
}
