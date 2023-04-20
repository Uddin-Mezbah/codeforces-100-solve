#include<stdio.h>

int main()
{
    int a,b;
    int t;
    scanf("%d",&t);

    int true;
    while(true)
    {
        scanf("%d %d",&a,&b);

        int ans=a%b;
        printf("%d\n",(b-ans)%b);
    }
}
