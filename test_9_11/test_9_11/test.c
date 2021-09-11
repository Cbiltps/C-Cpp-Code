#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//	int* p;//没有初始化，里边放的是随机值
//
//	*p = 20;//通过p中存的随机值作为地址，找到一个空间，这个空间不属于我们当前的程序
//	//就造成了非法访问，p就是野指针
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int* p = arr;
//	
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//}

//int* test()
//{
//	int a = 10;//局部变量，
//	return &a;//这样a的生命周期到了，内存空间还给了系统，但是把地址传给了p
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);//这地方的p就是野指针
//	return 0;
//}

int main()
{
	int a = 10;//明确地初始化，确定指向
	int* p = &a;
	
	int* q = NULL;//不知道一个指针当前应该指向哪里，可以初始化为NULL（空指针）
	//当然也可以 int* q = 0; ， 但是不便于识别为空指针
	//NULL的本质是0

	if (p != NULL)//用这个规避，不为空指针在执行
	{
		//不会出现野指针的问题
	}
}