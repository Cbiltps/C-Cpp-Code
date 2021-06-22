#include<stdio.h>
int main()
{
	int a = 20, b = 30;
	int * p1, * p2;//定义两个指针变量
	p1 = &a;//将a的地址传给p1,使用*p1的时候就是找到p1指向的地址所对应的值进行输出
	p2 = &b;
	printf("%d %d\n", a, b);
	printf("%d %d", *p1, *p2);
	return 0;
}