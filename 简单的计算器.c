  #define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a, b;
	char c;//��������
	printf("��ѡ�����㡰+ - * /��\n");
	while (1)
	{
		printf("�������������");
		scanf("%c",&c);
		printf("���������������Կո������");
		scanf("%d %d", &a, &b);
		switch (c)
		{
		case'+':
			printf("%d+%d=%d\n", a, b, a + b); break;
		case'-':
			printf("%d-%d=%d\n", a, b, a - b); break;
		case'*':
			printf("%d*%d=%d\n", a, b, a * b); break;
		case'/':
			printf("%d/%d=%d\n", a, b, a / b); break;
		default:
			printf("input error\n");
		}
		getchar();//��ֹ�ڶ�������ʱ������c���س�ռ�ã�����ֻ������һ��
	}
}
	