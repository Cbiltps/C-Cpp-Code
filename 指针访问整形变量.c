#include<stdio.h>
int main()
{
	int a = 20, b = 30;
	int * p1, * p2;//��������ָ�����
	p1 = &a;//��a�ĵ�ַ����p1,ʹ��*p1��ʱ������ҵ�p1ָ��ĵ�ַ����Ӧ��ֵ�������
	p2 = &b;
	printf("%d %d\n", a, b);
	printf("%d %d", *p1, *p2);
	return 0;
}