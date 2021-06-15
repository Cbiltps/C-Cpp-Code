#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);//exp1 ? exp2 : exp3
	//若a>b为真,则执行a
	//若a>b为假,则执行b
	printf("%d\n", max);
	return 0;
}
