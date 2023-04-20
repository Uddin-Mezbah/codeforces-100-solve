#include<stdio.h>

int main()
{
    int n,x,a,b;
    scanf("%d",&n);

    int max=0;
    int min=105;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>max) max=x,a=i;
        if(x<=min) min=x,b=i;
    }

    int p=a+n-1-b;
    if(a>b)
       {
          p--;
       }
    printf("%d",p);
}

