//#include<stdio.h>
//#include <string.h>
//
//
//int main() {
//    char str[100];
//    char arr[100];
//
//    scanf("%s", &str);
//
//    int len = strlen(str);
//    for (int i = 0; i < 10; i++){
//        arr[i] = 0;
//    }
//
//
//    for (int i = 0; i < len; i++) {
//        int sum = str[i] - '0';
//        if (sum >= 0 && sum <= 9){
//            arr[i]++;
//        }
//
//    }
//
//    for (int i = 0; i < 10; i++){
//        printf("%d ", arr[i]);
//    }
//
//
//}



#include <string.h>
#include<stdio.h>



int main() {
    char str[1000];
    char arr[10];
    scanf("%s", &str);
    int len = strlen(str);

    for (int i = 0; i < 10; i++){
        arr[i] = 0;
    }

    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum = str[i] - '0';
        if (sum>= 0 && sum <= 9)
            arr[sum]++;
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

}

