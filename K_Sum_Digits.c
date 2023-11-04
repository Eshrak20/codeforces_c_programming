#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int n[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%1d", &n[i]);
    }
    int sum = 0;
    for (int i = 0; i < input; i++)
    {
        sum = sum + n[i];
    }
    printf("%d", sum);

    return 0;
}
