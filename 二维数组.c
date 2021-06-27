#include<stdio.h>

int main()
{
	int i;
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	for (i = 1; i < 3; i++)
		printf("%d",a[i][3 - i]);
}