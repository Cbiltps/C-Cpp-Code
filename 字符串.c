#include<stdio.h>
int main()
{
	char arr1[] = "abc";//���ַ����ŵ���������
	//"abc"--'a','b','c','\0������'\0'--���ַ��������ı�־
	char arr2[] = { 'a','b','c','\0' };
	//'\0'��ֵ��0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
//�����ڼ����ϴ洢��ʱ�򣬴洢���Ƕ�����
//#$av�ȵ�
//������ASCII ����