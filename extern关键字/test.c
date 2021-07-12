#include<stdio.h>

//int main()
//{
//	//extern-声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//声明外部函数
extern int Add(int, int);

int main()
{
	int a = 20;
	int b = 30;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}