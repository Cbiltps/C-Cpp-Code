#include<stdio.h>

//int main()
//{
//	//extern-�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//�����ⲿ����
extern int Add(int, int);

int main()
{
	int a = 20;
	int b = 30;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}