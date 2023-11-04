#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000100];
    scanf("%s", &ar);
    long long int count = 0;
    for (int i = 0; i < strlen(ar); i++)
    {
        int sum = (ar[i] - '0');
        count = sum + count;
    }
    printf("%lld\n", count);

    return 0;
}
