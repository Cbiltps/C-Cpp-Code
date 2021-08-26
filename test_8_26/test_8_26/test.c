#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>

//void print(unsigned int n)
//{
//	/*if (n > 9)*/
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 1234;
//	print(num);
//
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度。

int my_strlen(char* s)
{
	if (*s != '\0')
	{
		return 1 + my_strlen(s + 1);
	}
	else
	{
		return 0;
	}
}

//int my_strlen(char* s)
//{
//	int count = 0;//这是一个临时变量
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//
//	return count;
//}

int main()

{
	char arr[20] = "abcd";//数组名arr是数组首元素的地址 — char*
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}


//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}


//int count = 0;//全局变量
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}


////求n的阶乘
//int factorial(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	return result;
//}
////求第n个斐波那契数
//int fib(int n)
//{
//	int result;
//	int pre_result;
//	int next_older_result;
//	result = pre_result = 1;
//	while (n > 2)
//	{
//		n -= 1;
//		next_older_result = pre_result;
//		pre_result = result;
//		result = pre_result + next_older_result;
//	}
//	return result;
//}