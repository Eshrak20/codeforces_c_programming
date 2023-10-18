#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    scanf("%s%s", &a, &b);
    long long int length_str_a = strlen(a);
    long long int length_str_b = strlen(b);
    printf("%lld %lld\n", length_str_a, length_str_b);
    printf("%s %s", a, b);
    return 0;
}
