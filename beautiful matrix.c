#include<stdio.h>
int main()
{

    int row,col;
    for(int i=1; i<=5; i++)
        for(int j=1; j<=5; j++)
        {
            scanf("%d",&col);
            if(col==1)
                row=(i>3?i-3:3-i)+(j>3?j-3:3-j);
        }

    printf("%d",row);
    return 0;
}
