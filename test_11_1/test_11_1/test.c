#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//��������ִ�ӡ�ķ�ʽ������ͻȻ�ʵ�����Ҳ���ᣬ�ش˼�¼

int main()
{
	int a = 1;
	float b = 1.3;
	float c = 1;
	printf("%d\n", a);
	printf("%2d\n", a);//���Ϊ2
	printf("%f\n", b );
	printf("%2f\n", b);//�����ʾ���Ǳ���С�������λ������ԭ����ֵ����С�������λ�Ļ���ֱ�Ӵ�ӡԭ����ֵ
	printf("%5.2f\n", b);
	printf("%6.3f\n", c);//ǰ���6��ʾ���ǿ�ȣ���С���㣩�����������С�������λ

	return 0;
}
