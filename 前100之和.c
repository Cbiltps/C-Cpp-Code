#include<stdio.h>
int main()
{
	int sum = 0;
	int i;
	for(i=1;i<=100;i++)
	{
		sum = sum + i;
	}
	printf("sum=%d/n", sum);
}