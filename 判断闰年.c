#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int year;//�������α���year
	printf("������Ҫ��ѯ����ݣ�\n");
	scanf("%d", &year);//�Ӽ�������Ҫ��ѯ�����
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//�ж����������
	{
		printf("%d����һ��������\n", year);
	}
	else 
	{
		printf("%d����һ�겻������", year);
	}
}
