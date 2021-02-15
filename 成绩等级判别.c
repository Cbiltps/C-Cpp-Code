#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main(int argc, const char* argv[])
{
	int score;
	printf("请输入成绩:");
	scanf("%d", &score);
	if (score >= 80)
	{
		printf("优秀");
	}
	else if (score >= 70)
	{
		printf("良好");
	}
	else if (score >= 60)
	{
		printf("及格");
	}
	else
	{
		printf("不及格");
	}
	return 0;
}
