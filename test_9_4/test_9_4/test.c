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

//int main()//������ʾ
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	//Խ��
//	for (i = 0; i <10; i++)
//	{
//		//printf("%d ", arr[i]);
//		arr[i] = 0;
//	}
//
//	return 0;
//}

void BubbleSort(int arr[], int sz)//��ʵ�����int arr[]�Ѿ���ָ���ˣ��൱��(int *arr[], int sz)
{
	int i = 0;
	//ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		//ð������Ĺ���
		int j = 0;
		int flag = 1;//�����Ѿ�����

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
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
	//���Ǵ��ε�����£���������������fizeof�ڲ���ʱ��
    //��:sizeof(arr),�����arr��ʾ�������飬������Ԫ�صĵ�ַ��
	int sz = sizeof(arr) / sizeof(arr[0]);

	//�������ڴ��ݸ�������ʱ�򣬻ή�������Ԫ�صĵ�ַ
	//���鴫��---ʵ���ϴ���ȥ������Ԫ�صĵ�ַ
	BubbleSort(arr, sz);//���鴫��
	Print(arr, sz);
	return 0;
}

//void BubbleSort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
