#include <stdio.h>
void fun(int *arr, int size_of_arr)
{
    for (int i = 0; i < size_of_arr; i++)
    {
        for (int j = 0; j < size_of_arr - 1; j++)
        {
            if (arr[i] >= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = size_of_arr - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
        break;
    }
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("%d", arr[i]);
        break;
    }
}

int main()
{
    int input;
    scanf("%d", &input);
    int arr[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    fun(arr, input);

    return 0;
}
