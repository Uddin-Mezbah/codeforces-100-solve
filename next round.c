#include<stdio.h>
int main()
{
    int n,k,i;
    int sum=0;

    scanf("%d %d",&n,&k);

    int arr[n];
    for( i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i=1; i<=n; i++)
    {
        if(arr[i]>0 && arr[i]>=arr[k])
        {
            sum++;
        }
    }
    printf("%d",sum);
}

