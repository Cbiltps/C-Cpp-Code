#include <stdio.h>

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


void test()
{
	static int a = 1;//a是一个静态的局部变量
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}
//static 修饰局部变量
//局部变量的生命周期变长

//static 修饰全局变量
//改变了变量的作用域
//让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用

//static 修饰函数——外部链接属性—>内部链接属性
//改变了函数的作用域——这样说是不准确的
//改变了函数的 链接属性
//普通的函数是有外部链接属性的