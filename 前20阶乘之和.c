#include <stdio.h>
int main()
{
	long long n = 1, sum = 0;//对于此题来说应该用long long类型，其他类型会溢出
	for (int i = 1; i <= 20; i++)
	{
		n *= i;
		sum += n;
	}
	printf("%I64d", sum);//输出说明符是百度来的
}