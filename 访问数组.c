#include<stdio.h>
int main()
{
	/*int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	...*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
	//�����еĴ��ŷֱ�Ϊ0-9
int i = 0;
while (i < 10)
{
	printf("%d", arr[i]);//�±�ķ�ʽ��������
	i++;
}
return 0;
}