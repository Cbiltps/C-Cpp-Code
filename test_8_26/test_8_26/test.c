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

//��д��������������ʱ���������ַ����ĳ��ȡ�

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
//	int count = 0;//����һ����ʱ����
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
	char arr[20] = "abcd";//������arr��������Ԫ�صĵ�ַ �� char*
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


//int count = 0;//ȫ�ֱ���
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}


////��n�Ľ׳�
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
////���n��쳲�������
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