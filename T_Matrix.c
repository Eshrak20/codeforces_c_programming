#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row;
    scanf("%d", &row);
    int arr[row][row];
    int red = 0;
    int blue = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                red = red + arr[i][j];
            }
            if (i + j == row - 1)
            {
                blue = blue + arr[i][j];
            }
        }
        printf("\n");
    }
    int absoluteValue_of_red = abs(red);
    int absoluteValue_of_blue = abs(blue);
    int sum = absoluteValue_of_red + absoluteValue_of_blue;

    printf("%d", sum);

    return 0;
}
