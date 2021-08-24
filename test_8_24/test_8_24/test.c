#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 1234;
	print(num);

	return 0;
}