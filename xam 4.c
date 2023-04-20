#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n+1];
        for (int i = 0; i < n + 1; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            arr[x]++;
        }
        int value = -1;
        for (int i = 0; i < n + 1; i++)
        {
            if (arr[i] >= 3)
            {
                value = i;
            }
        }
        printf("%d\n", value);
    }
}
