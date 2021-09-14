#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//	int a = 10;//占用空间大小是 4byte
//	int* p = &a;//p是一级指针
//	int** pp = &p;//pp就是二级指针 理论上可以无限套娃？
//    **pp = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
{
	int arr[10];//整型数组 - 存放整型的数组就是整型数组
	char ch[5];//字符数组 - 存放字符的数组就是字符数组
	//指针数组 - 存放指针的数组就是指针数组
	//int* 整型指针的数组
	//char* 字符指针的数组

	int* parr[5];//整型指针的数组
	char* pc[6];//字符指针的数组

	return 0;
}