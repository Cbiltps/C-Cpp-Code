#include <stdio.h>

//这段代码是vs2013的初次运行测试
//int main()
//{
//	printf("HelloWorld !\n");
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = Add(a, b);

	printf("%d\n", c);

	return 0;
}