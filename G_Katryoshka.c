#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    long long int eyes;
    long long int mouth;
    long long int body;
    scanf("%lld%lld%lld", &eyes, &mouth, &body);
    long long int keep = 0;
    if (eyes < mouth && eyes < body)

    {
        keep = eyes;
    }
    else if (mouth < body && mouth < eyes)
    {
        keep = mouth;
    }
    else if (body < eyes && body < mouth)
    {
        keep = body;
    }
    if (keep > 0)
    {
        eyes = (eyes - keep) / 2;
        mouth = mouth - keep;
        body = body - keep;
    }
    long long int keep_2 = 0;
    if (eyes < body)
    {
        keep_2 = eyes;
    }
    else
    {
        keep_2 = body;
    }
    long long int total_statue = keep + keep_2;

    printf("%lld", total_statue);

    return 0;
}
