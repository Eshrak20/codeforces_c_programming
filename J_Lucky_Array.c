#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            sum++;
        }
    }
    if (sum % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}
