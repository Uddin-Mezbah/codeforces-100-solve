//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//    int n;
//
//    scanf("%d", &n);
//    int *arr = (int*) malloc(n * sizeof(int));
//
//    int sum = 0;
//    for(int i = 0; i < n; i++) {
//        scanf("%d", arr+i);
//    }
//
//    for(int i = 0; i < n; i++) {
//        sum += *(arr + i);
//    }
//
//    printf("%d\n", sum);
//
//}

#include<stdio.h>
#include<string.h>

int main()
{

    int  n;
    int arr[100];
    int revr[100];
    scanf("%d",&n);


    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    for(int k = revr;k<0;k--){
        printf("%d",revr[k]);
        break;
    }

    for(int i = n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }



}

