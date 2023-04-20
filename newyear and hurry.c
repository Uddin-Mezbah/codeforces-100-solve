#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int day =240-k;

    int sum=0;
    for( i=1; i<=n; i++)
    {
        sum=sum+5*i;
        if(sum>day)

            break;

    }
    printf("%d",i-1);

}
