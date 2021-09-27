#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//这个是用于练习调试的代码
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	//int ret = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//	/*for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//
//	return 0;
//}

//int main()
//{
//	printf("haha\n");
//	return 0
//}编译型错误

//链接型错误
int main()
{
	int ret = Add(2, 3);//但是我并没有定义函数
	printf("%d\n", ret);
	return 0;
}
