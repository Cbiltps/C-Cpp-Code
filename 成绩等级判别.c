#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main(int argc, const char* argv[])
{
	int score;
	printf("������ɼ�:");
	scanf("%d", &score);
	if (score >= 80)
	{
		printf("����");
	}
	else if (score >= 70)
	{
		printf("����");
	}
	else if (score >= 60)
	{
		printf("����");
	}
	else
	{
		printf("������");
	}
	return 0;
}
