#include<stdio.h>
#include<string.h>


int main()
{
    int a[26]={0};

    char str[1005];
    gets(str);

    for(int i = 0; i<strlen(str)-1;i++)
    {
        a[str[i]-'a']++;
    }
    int ans = 0;
    for(int i = 0;i<26;i++)
    {
        if(a[i]>0)
        {
            ans++;
        }
    }
    printf("%d\n",ans);
}
