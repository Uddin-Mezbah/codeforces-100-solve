#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int a,b;
    int count=0;

    for(int i=1; i<=t; i++)
    {
        scanf("%d %d", &a,&b);
        if(a==b)
            printf("0\n");
        else if(a<b && (b-a)%2!=0 || a>b &&(a-b)%2==0)
            printf("1\n");
        else
            printf("2\n");
    }

}

