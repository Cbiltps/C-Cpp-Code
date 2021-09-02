#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//type_t arr_name[const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小

////代码1
//int arr1[10];
// 
////代码2
//int count = 10;
//int arr2[count];//数组时候可以正常创建？
// 
////代码3
//char arr3[10];
//float arr4[1];
//double arr5[20];


//这里面有一个知识点不懂 缓冲区的内容如何清除？
int main()
{
	char password[20] = {0};

	printf("请输入密码:>");
	scanf("%s", password);

	//把缓冲区中的内容
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	printf("请确认密码(Y/N):>");
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;
}
