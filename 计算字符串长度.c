#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };
	printf("%d\n", strlen(arr1));//strlen - string lenth - �����ַ������ȵ�
	printf("%d\n", strlen(arr2));
	return 0;
}