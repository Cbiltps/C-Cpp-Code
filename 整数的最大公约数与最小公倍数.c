//自定义函数求整数的最大公约数与最小公倍数
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int la(int m, int n);
int sm(int m, int n, int o);
int main()
{
	int x, y, l, s;
	printf("请输入两个数：");
	scanf("%d%d", &x, &y);
	l = la(x, y);
	s = sm(x, y, l);
	printf("最大公约数是：%d\n", l);
	printf("最小公倍数是：%d\n", s);
}
int la(int m, int n)
{
	int t, i;
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}
	while (n != 0)
	{
		i = m % n;
		m = n;
		n = i;
	}
	return(m);
}
int sm(int m, int n, int o)
{
	o = la(m, n);
	return(m * n / o);
}