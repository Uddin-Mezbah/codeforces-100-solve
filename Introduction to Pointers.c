#include<stdio.h>

int main()
{
    int a = 10;
    printf("Address -> %p value->%d\n",&a,a);
    int *p=&a;
    printf("Address -> %p value->%d\n",&p,p);
    printf("Address -> %p value->%d\n",&a,a);
    printf("Address -> %p value->%d\n",*p);


}
