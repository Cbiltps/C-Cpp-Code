#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//�������ݡ�ʹ�����뺯��scanf
	scanf("%d%d" , &num1, &num2);//&��ȡ��ַ����
	sum = num1 * num2;
	printf("sum = %d\n", sum);
	return 0;
}