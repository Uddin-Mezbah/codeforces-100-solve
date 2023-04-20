#include<stdio.h>
#include<string.h>

int main()
{
    int n,z;
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
        if(str[i]=='z')
        {
            printf("0 ");
        }

    }
    return 0;

}
