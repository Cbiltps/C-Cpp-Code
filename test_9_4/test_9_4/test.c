#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//
//	//char ch1[4][6] = { 'a', 'b' };
//	//char ch2[4][6] = { {'a'},{ 'b'} };
//	char ch3[4][6] = { "abc", "def", "qwe" };
//
//}

//int main()
//{
//
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d]=%p ",i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()//错误演示
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	//越界
//	for (i = 0; i <10; i++)
//	{
//		//printf("%d ", arr[i]);
//		arr[i] = 0;
//	}
//
//	return 0;
//}

void BubbleSort(int arr[], int sz)//其实这里的int arr[]已经是指针了，相当于(int *arr[], int sz)
{
	int i = 0;
	//冒泡排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		//冒泡排序的过程
		int j = 0;
		int flag = 1;//假设已经有序

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}

		if (1 == flag)
		{
			break;
		}
	}
}

void Print(int p[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", p[i]);
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//不是传参的情况下，数组名单独放在fizeof内部的时候，
    //如:sizeof(arr),这里的arr表示整个数组，不是首元素的地址。
	int sz = sizeof(arr) / sizeof(arr[0]);

	//数组名在传递给函数的时候，会降级变成首元素的地址
	//数组传参---实际上传过去的是首元素的地址
	BubbleSort(arr, sz);//数组传参
	Print(arr, sz);
	return 0;
}

//void BubbleSort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	BubbleSort(arr);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("-----------------\n");
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}
