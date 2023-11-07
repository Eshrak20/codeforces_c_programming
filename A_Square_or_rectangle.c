#include <stdio.h>

int main()
{
    int row;
    scanf("%d", &row);
    int arr[row][2];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < row; i++)
    {

        if (arr[i][0] == arr[i][1])
        {
            flag = 0;
        }

        if (flag == 0)
        {
            printf("Square");
            printf("\n");
        }
        else
        {
            printf("Rectangle");
            printf("\n");
        }
        flag = 1;
    }

      return 0;
}
