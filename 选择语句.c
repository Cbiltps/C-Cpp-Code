#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int intput = 0;
	printf("XXX!\n");
	printf("Ҫ���ҵ�Ů������(1/0)>:");
	scanf("%d", &intput);
	if (intput == 1)
		printf("����һ������ѽ\n");
	else
		printf("�ؼ�������ȥ�ɣ�");
	return 0;
}