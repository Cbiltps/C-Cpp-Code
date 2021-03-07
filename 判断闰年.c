#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int year;//定义整形变量year
	printf("请输入要查询的年份：\n");
	scanf("%d", &year);//从键盘输入要查询的年份
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//判断闰年的条件
	{
		printf("%d年这一年是闰年\n", year);
	}
	else 
	{
		printf("%d年这一年不是闰年", year);
	}
}
