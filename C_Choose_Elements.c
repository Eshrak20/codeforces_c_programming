#include<stdio.h>

int main()
{
    long long int n,k;
    scanf("%lld %lld", &n,&k);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j < n-1; j++)
        {
            if (arr[i] > arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        }
        long long int sum = 0;
        for (long long int i = 0; i < k; i++)
        {
           
            if (arr[i] > 0)
            {
                sum = sum + arr[i];
            }
            
        }

        printf("%lld", sum);

        return 0;
}
