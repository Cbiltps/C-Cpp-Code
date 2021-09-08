#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main()
{
	int num = 10;
	&num;//取出num的地址
	//注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
	printf("%p\n", &num);//打印地址，%p是以地址的形式打印
	return 0;
}

//int a = 10;
//int* pa = &a;
//pa用来存放地址（指针）