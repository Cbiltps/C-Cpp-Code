#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//
//	Swap1(num1, num2);
//	printf("Swap1:num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2:num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}

#include <math.h>

//判断n是否为素数
//int is_prime(int n)
//{
//	//试除法,有两种方法
//	//2~n-1
//	//2~sqrt(n)
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int cnt = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			cnt++;
//		}
//	}
//	printf("\ncount = %d\n", cnt);
//
//	return 0;
//}

//1000-2000 闰年

//int is_leap_year(int y)
//{
//	if (y % 4 == 0)
//	{
//		if (y % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (y % 400 == 0)
//		return 1;
//
//	return 0;
//}
//
// 优化后
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

//再优化后
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是否为闰年
//		//函数
//		//是闰年，返回1
//		//不是闰年，返回0
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}
//void Use(int* p)
//{
//	*p = *p + 1;
//}
//
//int main()
//{
//	int num = 0;
//	Use(&num);
//	printf("%d\n", num);
//	Use(&num);
//	printf("%d\n", num);
//	Use(&num);
//	printf("%d\n", num);
//
//	return 0;
//}


//#include <stdio.h>
//
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//
//	return 0;
//}


int main()
{
	int len = strlen("abc");

	printf("%d\n", len);
	printf("%d\n", strlen("abc"));//链式访问

	return 0;
}