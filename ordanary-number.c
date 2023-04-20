#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while(a--){
        int n;
        scanf("%d",&n);
        int count=n;
        int ans=0;
        while(count>0){
            count=count/10;
            ans++;
        }
        int value=0;
        for(int i=0;i<ans;i++){
            value=(value*10)+1;
        }
        int out=9*(ans-1)+(n/value);
        printf("%d\n",out);
    }
}




