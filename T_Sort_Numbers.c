#include <stdio.h>
void fun(int x, int y, int z)
{
    int arr[3] = {x, y, z};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (arr[i] <= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {

        printf("%d\n", arr[i]);
    }
    printf("\n");
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    fun(x, y, z);
    int arr[3] = {x, y, z};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
