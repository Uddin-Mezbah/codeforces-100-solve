#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int k = n / 2;
    printf("%d\n", k);


    for (int i = 0; i < k - 1; i ++) {
        printf("2 ");
    }
    printf("%d", 2 + (n % 2));

    return 0;
}
