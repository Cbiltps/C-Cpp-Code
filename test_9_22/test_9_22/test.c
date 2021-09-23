#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

void test()
{
	printf("haha\n");
}

int main()
{
	int arr[10] = { 0 };
	test();
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}