#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int intput = 0;
	printf("XXX!\n");
	printf("要做我的女朋友吗？(1/0)>:");
	scanf("%d", &intput);
	if (intput == 1)
		printf("给你一个抱抱呀\n");
	else
		printf("回家买卖薯去吧！");
	return 0;
}