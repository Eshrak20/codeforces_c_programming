
#include <stdio.h>
#include <string.h>

int main()
{
    char input[10000007];
    scanf("%s", input);
    int sz = strlen(input);
    int counter[26] = {0};

    for (int i = 0; i < sz; i++)
    {
        int val = input[i] - 'a';
        counter[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counter[i] != 0)
        {
            char uniqueChar = i + 'a';
            printf("%c : %d\n", uniqueChar, counter[i]);
        }
    }

    return 0;
}
