#include<stdio.h>

int main()

{



    char str[102];

    scanf("%s",&str);

    int sum=0;
    for(int i=1; str[i]!='\0'; i++)

    {
        if(str[i]>90)

        {
            sum=1;

            break;
        }
    }

    if(sum==1)

    {
        printf("%s",str);
    }

    else

    {
        {
            for(int i=0; str[i]!=0; i++)

                if(str[i]>90)

                    str[i]-=32;
                else
                    str[i]+=32;
        }

        printf("%s",str);
    }

    return 0;
}




