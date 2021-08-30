#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a,b);

	printf("%d\n", ret);

	return 0;
}