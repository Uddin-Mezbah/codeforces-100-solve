//#include<stdio.h>
//int main()
//{
//    char a[100],b[100],jogfol[101];
//    scanf("%s %s",&a,&b);
//    strrev(a);
//    strrev(b);
//
//    int i = 0,j=0,k=0,hate=0;
//
//    while(i<strlen(a)&& j<strlen(b))
//    {
//        int sum=(a[i]-'0')+(b[j]-'0')+hate;
//        jogfol[k]=(sum%10+'0');
//        hate=sum/10;
//        i++;
//        j++;
//        k++;
//    }
//    while(i<strlen(a))
//    {
//        int sum=(a[i]-'0')+hate;
//        jogfol[k]=(sum%10+'0');
//        hate=sum/10;
//        i++;
//        k++;
//    }
//    while(j<strlen(b))
//    {
//        int sum=(b[j]-'0')+hate;
//        jogfol[k]=(sum%10+'0');
//        hate=sum/10;
//        j++;
//        k++;
//
//    }
//    if(hate>0)
//    {
//        jogfol[k]=hate+'0';
//    }
//    strrev(jogfol);
//    printf("%s",jogfol);
//
//}

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], sum[101];
    scanf("%s %s", a, b);
    strrev(a);
    strrev(b);

    int i = 0, j = 0, k = 0, hate = 0;
    while (a[i] != '\0' && b[j] != '\0')
    {
        sum[k] = (((a[i] - '0') + (b[j] - '0') + hate)%10) + '0';
        hate = ((a[i] - '0') + (b[j] - '0') + hate)/10;
        i++;
        j++;
        k++;
    }
    while (a[i] != '\0')
    {
        sum[k] = (((a[i] - '0') + hate)%10) + '0';
        hate = ((a[i] - '0') + hate)/10;
        i++;
        k++;
    }
    while (b[j] != '\0')
    {
        sum[k] = (((b[j] - '0') + hate)%10) + '0';
        hate = ((b[j] - '0') + hate)/10;
        j++;
        k++;
    }

    if (hate > 0)
    {
        sum[k] = hate + '0';
        k++;
    }
    else
    {
        sum[k] = '\0';
    }

    strrev(sum);

    printf("%s", sum);

    return 0;
}

