#include <stdio.h>


int main() {

    int n;
    int sum=0;
    scanf("%d", &n);

    int a;
    while(n>0)
    {
     a = n%10;
     sum = sum+a;
     n = n/10;
    }
    printf("%d",sum);
}
