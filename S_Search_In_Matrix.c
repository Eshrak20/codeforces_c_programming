#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    int flag = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == x)
            {
                flag = 0;
            }
        }

    }
    if (flag == 0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}