#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, p;
	double S;
	printf("请输入三边长度：\n");
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
	{   
		p = (a + b + c) / 2;
		S = sqrt(p * ( p - a)*(p - b)*(p - c));//海伦公式
		printf("此三角形的面积为： %f\n", S);
	}
	else
	{
		printf("您所输入的三边不能构成三角形！\n");
	}
}