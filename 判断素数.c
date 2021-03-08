#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int m,i;
	printf("输入一个数：");
	scanf("%d",&m);
	for (i = 2; i <= m; i++)
		if (m % i == 0)
			break;
	    if (i > m)
		    printf("%d是素数\n", m);
	    else
		    printf("%d不是素数\n", m);
		return 0;
}