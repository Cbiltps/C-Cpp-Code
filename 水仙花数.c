#include<stdio.h>
int main()
{
	int a, b, c;
	for (int i = 100; i <= 999; i++)
	{ 
		a = i / 100;//��λ��
		b = (i / 10) % 10;//ʮλ��
		c = i % 10;//��λ��
		if (a * a * a + b * b * b + c * c * c == i)
			printf("%d\n",i);
	}
	return 0;
}