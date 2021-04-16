#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	do
	{
		i = i + j;
		j++;
	} 	
	while (j <= 100);
		printf("%d\n", i);
	return 0;
}