#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);


    int line=0;
    int x=0;
    for(int i = 0; n>=x;i++)
    {
        n=n-x;
        x=x+(i+1);
        line++;
        //line--;



    }
    printf("%d\n",line-1);
    return 0;

}
