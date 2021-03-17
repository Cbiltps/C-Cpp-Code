  #define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a, b;
	char c;//存放运算符
	printf("请选择运算“+ - * /”\n");
	while (1)
	{
		printf("请输入运算符：");
		scanf("%c",&c);
		printf("请输入两个数，以空格隔开：");
		scanf("%d %d", &a, &b);
		switch (c)
		{
		case'+':
			printf("%d+%d=%d\n", a, b, a + b); break;
		case'-':
			printf("%d-%d=%d\n", a, b, a - b); break;
		case'*':
			printf("%d*%d=%d\n", a, b, a * b); break;
		case'/':
			printf("%d/%d=%d\n", a, b, a / b); break;
		default:
			printf("input error\n");
		}
		getchar();//防止第二次运算时，输入c被回车占用，程序只能运算一次
	}
}
	