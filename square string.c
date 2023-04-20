#include<stdio.h>
#include<string.h>

int main()
{
    int t,n;
    scanf("%d",&t);

    char str[101];
    for(int tc = 1; tc<=t;tc++)
    {
        scanf("%s",&str);
        int n = strlen(str);
        if(n%2 !=0)
        {
            printf("NO\n");
            continue;
        }
        int mid = n/2;

        int cnt=0;

          for(int i = 0,j=mid;i<mid,j<n;i++,j++)
        {
            if(str[i]!=str[j])
            {
                printf("NO\n");
                cnt++;
                break;
            }
        }
            if(cnt == 0)
            {
                printf("YES\n");
            }
        }

}
