#include<stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum1 = 0;
	int sum2 = 0;
	int a = 100;
	int b = 200;
	sum1 = Add(num1, num2);
	sum2 = Add(a, b);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	return 0;
}