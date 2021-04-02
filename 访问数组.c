#include<stdio.h>
int main()
{
	/*int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	...*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
	//数组中的代号分别为0-9
int i = 0;
while (i < 10)
{
	printf("%d", arr[i]);//下标的方式访问数组
	i++;
}
return 0;
}