#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int sum=0;
    int count =0;
    int x,y;

    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y) sum++;

        else if(x<y) count++;

    }
    if(sum>count) printf("Mishka");

    else if(sum<count) printf("Chris");

    else printf("Friendship is magic!^^");

    return 0;
}
