#include<stdio.h>

int main()
{
  char str [200];
	scanf("%s",&str);
	for(int i=0;str[i];i++)
  {
    if(str[i]=='.')
      printf("0");
    else
    {
      if(str[++i]=='.')
        printf("1");
      else
        printf("2");
    }
	}
  return 0;
}
