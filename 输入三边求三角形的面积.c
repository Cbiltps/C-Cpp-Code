#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, p;
	double S;
	printf("���������߳��ȣ�\n");
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
	{   
		p = (a + b + c) / 2;
		S = sqrt(p * ( p - a)*(p - b)*(p - c));//���׹�ʽ
		printf("�������ε����Ϊ�� %f\n", S);
	}
	else
	{
		printf("������������߲��ܹ��������Σ�\n");
	}
}