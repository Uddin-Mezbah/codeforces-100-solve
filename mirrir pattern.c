#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int rows = 0;
    printf("Enter the number of rows = ");
    scanf("%u",&rows);
    for(x=1; x<=rows; ++x)
    {
        // Print spaces
        for(y=x; y<rows; ++y)
        {
            printf(" ");
        }
        // Print star
        for(y=1; y<=x; ++y)
        {
            printf("*");
        }
        // Print new line
        printf("\n");
    }
    return 0;
}
