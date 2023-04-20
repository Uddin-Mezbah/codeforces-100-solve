#include <stdio.h>
#include<string.h>

int main()
{
    int n,k=0,f=0,z;
    int Sereja=0;
    int Dima=0;
    scanf("%d",&n);

    int x[n],j=n-1;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    while(k<=j)
    {
        if(x[k]>x[j])
        {
            z=x[k];
            k++;
        }
        else
        {
            z=x[j];
            j--;
        }
        if(f==0)
        {
            Sereja+=z;
            f=1;
        }
        else
        {
            Dima+=z;
            f=0;
        }
    }
    printf("%d %d\n",Sereja,Dima);

}
