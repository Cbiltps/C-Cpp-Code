#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main()
{
	int num = 10;
	&num;//ȡ��num�ĵ�ַ
	//ע������num��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
	printf("%p\n", &num);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
	return 0;
}

//int a = 10;
//int* pa = &a;
//pa������ŵ�ַ��ָ�룩