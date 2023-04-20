#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str[100];
    scanf("%d", &n);

    int ans = 0;
    for(int i =1; i <=n; i++)
    {
        scanf("%s", &str);

        if(str[0]=='T')
        {
            ans=ans+4;
        }
        if(str[0]== 'C')
        {
            ans=ans+6;
        }
        if(str[0]== 'O')
        {
            ans=ans+8;
        }
        if(str[0]== 'D')
        {
            ans= ans+12;
        }
        if(str[0]== 'I')
        {
            ans= ans+20;
        }


    }
     printf("%d", ans);

}
