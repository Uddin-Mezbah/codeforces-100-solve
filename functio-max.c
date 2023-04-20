#include<stdio.h>

int get_max (int arr[])
{
    int i;

    int max=arr[0];
    for(i = 1; i<5; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    return max;
}

int main()
{
    int max[]={10,20,30,40};
    int get_value = get_max(max);
    printf("%d ",get_value);
}











