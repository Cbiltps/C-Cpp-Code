#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include "add.h"

//int Add(int x, int y);//������������ں��棬��Ҫ��ǰ��������

int main()
{
	int a = 10;
	int b = 20;

	//�ӷ�
	int ret = Add(a, b);

	printf("%d\n", ret);

	return 0;
}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}