#include<stdio.h>

int main()
{

    char arr[1001];
    scanf("%s",&arr);
    char str[100] = "heidi";

    int ans=0,count=0;
    int len = strlen(arr);
    for(int i=0;i<5;i++)
    {
        for(int j=count;j<len;j++)
        {
            if(str[i]==arr[j])
            {
                ans++;
                count =j+1;
                break;
            }
        }
    }
    if(ans==5) printf("YES");
    else  printf("NO");
}

