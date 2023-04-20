#include<stdio.h>

int main()
{
    int t,j;
    scanf("%d",&t);

    int n;
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);

        for(j=0; j<n; j++)
        {
            if(str[j]=='8')
                break;
        }
        if(n-j-1>=10)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

