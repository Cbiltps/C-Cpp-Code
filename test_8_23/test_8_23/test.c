#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include "add.h"

//int Add(int x, int y);//如果函数定义在后面，就要在前面先声明

int main()
{
	int a = 10;
	int b = 20;

	//加法
	int ret = Add(a, b);

	printf("%d\n", ret);

	return 0;
}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}