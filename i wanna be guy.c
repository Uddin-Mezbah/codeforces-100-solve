#include<stdio.h>
#include<string.h>


int main()
{
    int n,p,q;
    scanf("%d\n",&n);
    int *ptr=(int*) malloc(sizeof(int)*n);
    for(int i=0; i<n; i++)
        ptr[i]=0;
    for(int i=1; i<=2; i++)
    {
        scanf("%d",&p);
        for(int j=0; j<p; j++)
        {
            scanf("%d",&q);
            ptr[q-1]=q;
        }
    }
    for(int i=0; i<n; i++)
        if(ptr[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    printf("I become the guy.");
    return 0;
}
