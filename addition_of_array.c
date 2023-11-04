#include <stdio.h>

int main()
{
    int input1;
    scanf("%d", &input1);
    int array_1[input1];
    for (int i = 0; i < input1; i++)
    {
        scanf("%d", &array_1[i]);
    }

    int input2;
    scanf("%d", &input2);
    int array_2[input2];
    for (int i = 0; i < input2; i++)
    {
        scanf("%d", &array_2[i]);
    }

    int input3 = (input1 + input2);
    int array_3[input3];
    for (int i = 0; i < input3; i++)
    {
        array_3[i] = array_1[i];
    }
    int n = input1;

    for (int i = 0; i < input2; i++)
    {
        array_3[n] = array_2[i];
        n++;
    }

    for (int i = 0; i < input3; i++)
    {
        printf("%d ", array_3[i]);
    }

    return 0;
}
