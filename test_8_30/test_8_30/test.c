#define _CRT_SECURE_NO_DEPRECATE 1

//迭代（循环）的方式解决斐波那契问题
#include <stdio.h>

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}


//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}