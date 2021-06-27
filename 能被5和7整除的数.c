#include<stdio.h>

int main()
{
	int a;
	for (a = 100; a <= 200; a++)
		if (a % 5 == 0 && a % 7 == 0)
	printf("%d\t", a);
}