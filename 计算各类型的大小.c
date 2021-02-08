#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char));//sizeof是用来测字符长度（字节)的
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}