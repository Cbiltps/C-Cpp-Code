#include<stdio.h>
int main()
{
	int a, b;
	int* p1, * p2;
	p1 = &a;
	p2 = &b;
	scanf_s("%d %d", &a, &b);
	if (*p1 > *p2)
	{
		printf("%d %d\n", a, b);
	}
	else
	{
		printf("%d %d\n", b, a);
	}
	return 0;
}