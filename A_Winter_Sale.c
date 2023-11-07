#include <stdio.h>
#include <math.h>

int main()
{
    float discount;
    scanf("%f", &discount);
    float discountPrice;
    scanf("%f", &discountPrice);
    float x = 1-(discount/100);

    float org = (discountPrice / x);
    printf("%0.2f", org);

    return 0;
}
