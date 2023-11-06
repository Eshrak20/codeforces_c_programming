#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col], arr2[row][col], arr3[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

// --------------------------------------------

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    // for (int x = 0; x < row; x++)
    // {
    //     for (int y = 0; y < col; y++)
    //     {
    //         printf("%d ", arr2[x][y]);
    //     }
    //     printf("\n");
    // }

//------------------------------------
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int x = arr3[i][j] = arr[i][j] + arr2[i][j];

            scanf("%d", &x);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int x = arr3[i][j] = arr[i][j] + arr2[i][j];

            printf("%d ", x);
        }
        printf("\n");
    }

    return 0;
}
