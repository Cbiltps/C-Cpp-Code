#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main() 
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n",pa);
//	printf("%p\n", pa+1);
//	printf("------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	char* pa = arr;
	int i = 0;

	for (i = 0; i < 40; i++)
	{
		*(pa + i) = 1;
	}

	return 0;
}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0] - ÀàÐÍÊÇint*
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//0x 00 00 00 01
//	}
//
//	return 0;
//}