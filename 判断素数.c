#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int m,i;
	printf("����һ������");
	scanf("%d",&m);
	for (i = 2; i <= m; i++)
		if (m % i == 0)
			break;
	    if (i > m)
		    printf("%d������\n", m);
	    else
		    printf("%d��������\n", m);
		return 0;
}