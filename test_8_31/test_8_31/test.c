#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}

//getchar�Ƕ�ȡ�ַ�
//Ϊʲô���������� int �أ�
//1.��Ȼ getchar ���ص����ַ�����ʵ���ص����ַ��� ascii ��ֵ��������
//2.getchar �� ��ȡ��������ʧ�ܵ�ʱ�򣬻᷵�� EOF
//EOF���� end of file ���ı�����ʵ��һ������ -1 ��һ������