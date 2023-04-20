#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d %d", &n,&x);

	int max = x;
	int min = x;
	int count = 0;

	for (int i = 1; i < n; i++)
	{
		scanf("%d", &x);
		if (x > max)
		{
			max = x;
			count++;
		}
		else if (x < min)
		{
			min = x;
			count++;
		}
	}
	printf("%d", count);
}
