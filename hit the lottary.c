#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    //int sum=n/100+(n%100)/20+(n%20)/10+(n%10)/5+n%5;

     int sum = n/5+(n%5)/10+(n%20)/20+(n%20)/100+n%100;

    printf("%d\n",sum);
}

