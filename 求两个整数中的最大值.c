#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int max(int x, int y);//对被调用函数max的声明
	int a, b, c;
	scanf("%d,%d",&a,&b);
	c = max(a, b);
	printf("max=%d\n", c);
	return 0;
}
int max(int x, int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	return(z);
}