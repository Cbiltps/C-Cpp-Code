#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a;
	printf("请输入金字塔的高度：");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < a - i; j++)
			printf(" ");
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
return 0;
}