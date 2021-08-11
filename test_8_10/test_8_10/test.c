#include <stdio.h>

void print1(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void print2(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
}

//����ָ��
void print3(int (*parr)[10], int sz)//����һ�������ʾ��
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", parr[i]);//parr[i] == *(parr+i)
	}
}

void print4(int (*parr)[10], int sz)
{
	//*(parr + 0);//parr[0]
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//printf("%d ", parr[0][i]);
		//printf("%d ", (*(parr + 0))[i]);
		printf("%d ", (*parr)[i]);//(*parr) �൱�� parrָ��������������
	}
}


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);

	print4(&arr, sz);

	//print3(&arr, sz);
	//print2(arr, sz);
	//print1(arr, sz);//��ӡarr���������

	return 0;
}