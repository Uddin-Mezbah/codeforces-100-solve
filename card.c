#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    for(int i=0; i<n; i++)
    {
        if(str[i]=='n')
        {
            printf("1 ");
        }
    }
    for(int i=0; i<n; i++)
    {
        if(str[i]=='o')
        {
            printf("0 ");
        }
    }

}


