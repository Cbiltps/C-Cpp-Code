#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//这个是这种打印的方式，有人突然问到，我也不会，特此记录

int main()
{
	int a = 1;
	float b = 1.3;
	float c = 1;
	printf("%d\n", a);
	printf("%2d\n", a);//宽度为2
	printf("%f\n", b );
	printf("%2f\n", b);//这个表示的是保留小数点后两位，但是原本的值超过小数点后两位的话，直接打印原来的值
	printf("%5.2f\n", b);
	printf("%6.3f\n", c);//前面的6表示的是宽度（加小数点），后面的三是小数点后三位

	return 0;
}
