#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int a,b,c,d;
    int p1,p2,p3,p4;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b){
            p1=b;
            p4=a;
        }
        else{
            p1=a;
            p4=b;
        }
        if(c>d){
            p2=c;
            p3=d;
        }
        else{
            p2=d;
            p3=c;
        }
        if(p1<p2 && p3<p4)
        {
          printf("YES");
        }
        else
        {
            printf("NO");
        }

    }
    return 0;
}
