#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(int i=0; i<=(n); i++)
    {
        if(str[i]=='x'&&str[i+1]=='x'&&str[i+2]=='x')
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
    return 0;
}
