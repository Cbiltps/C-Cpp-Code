#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//	int* p = NULL;
//	*p = 100;//error
//	//����Կ�ָ������˽����ò���
//	//��ָ����0��0Ҳ��һ����ַ��0ָ��ĵ�ַ�ռ��ǲ�����ʹ�õ�
//	//��ָ�벻��ֱ�ӽ��н�����
//
//	//���������
//	if (p != NULL)
//	{
//		//...
//	}
//}

//��������ָ�������
//#define N_VALUES 5

//int main()
//{
//	float values[N_VALUES];
//	float* vp = NULL;
//	
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = &arr[10];
//
//	printf("%p\n", p);
//	printf("%p\n", p-1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = &arr[10];
//
//	printf("%d\n", &arr[9] - &arr[0]);//?
//	printf("%d\n", &arr[0] - &arr[9]);//?
//
//	return 0;
//}



//int my_strlen(char* s)
//{
//	char* start = s;
//
//	while (*s != '\0')
//	{
//		s++;
//	}
//
//	return s-start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//	*--vp = 0;
//}
//
//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//{
//	*vp = 0;
//}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}

	return 0;
}