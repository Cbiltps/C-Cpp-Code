#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		i = 5;
//	}
//
//	return 0;
//}



//int main()
//{
	//int i = 0;
	///*变种1*/
	//for (;;)
	//{
	//	printf("hehe\n");
	//}
	// 
	// 
	//变种2
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//}


//请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//do
//{
//	循环语句;
//} 
//while (表达式);

#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= 10);
	return 0;
}


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		if (i == 5)
//			continue;
//		i++;
//	} while (i <= 10);
//}