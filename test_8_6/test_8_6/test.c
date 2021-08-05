#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test()
{
	printf("hehe\n");
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;

	test();

	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}//主要联系调试写的代码