#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//	//int ret = 9 / 2;//对于 /(除号) 两边都是整数，执行的整数除法
//	//double ret2 = 9 / 2;
//	//double ret3 = 9 / 2.0;//操作数中浮点数，才执行浮点数除法
//	//int ret4 = 10 % 4;
//
//
//
//	//printf("%d\n", ret);
//	//printf("%lf\n", ret2);
//	//printf("%lf\n", ret3);
//
//	/*int a = 5;
//	int b = a >> 1;
//	printf("%d\n", b);*/
//
//
//	int c = -1;
//	int d = c << 1;
//	printf("%d\n", d);//打印的是原码的值
//
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//
//	return 0;
//}

//int main()
//{
	/*int a = 3;
	int b = -2;
	int c = a & b;
	printf("%d\n", c);*/
	//%d - 说明我们要打印c的值，以有符号的形式
	//00000000000000000000000000000010 - 3的原码
	// 
	//00000000000000000000000000000011
	//11111111111111111111111111111110
	//00000000000000000000000000000010 这个数是2
	//
	// 
	//10000000000000000000000000000010 - -2的原码
	//11111111111111111111111111111101 - -2的反码
	//11111111111111111111111111111110 - -2的补码
	

	/*int a = 3;
	int b = -2;
	int c = a | b;
	printf("%d\n", c);*/

	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001 ~ -1


	//int a = 3;
	//int b = -2;
	//int c = a ^ b;//二进制位异或
	//printf("%d\n", c);

	//00000000000000000000000000000011
	//11111111111111111111111111111110
	//11111111111111111111111111111101
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a=%d b=%d\n", a, b);
//	//1
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//
//	//2
//	//溢出的问题
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//3
//	//异或
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//代码的可读性不够好
//	//只适用于整型
//	//
//	/*printf("a=%d b=%d\n", a, b);
//	return 0;*/
//}


//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	int b = ~a;
//	printf("%d\n", b);
//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 所有位按位取反
//	// 
//	//11111111111111111111111111111110 反码
//	//10000000000000000000000000000001 原码
//	//-1
//	return 0;
//}


//垃圾代码
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//err
//	printf("b=%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	/*int a = 10;
//	int b = --a;
//	printf("%d\n", b);
//	return 0;*/
//
//	//int a = (int)3.14;//默认写出的浮点数是double的,所以可以强制转换
//	//printf("%d\n", a);
//	//return 0;
//}


//void test1(int arr[])//它的本质数是（int* arr[]）
//{
//	printf("%d\n", sizeof(arr));//传的是首元素的地址
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//数组名单独放在sizeof内部，数组名表示整个数组
//	printf("%d\n", sizeof(ch));//(3)
//
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//程序输出的结果是什么？

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//
//	printf(" a = %d\n b = %d \n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
	//int a = 0;
	//int b = 0;

	//if (a > 5)
	///*	b = 3;
	//else
	//	b = -3;*/

	//(a > 5) ? (b = 3) : (b = -3);


	////代码3
	//a = get_val();
	//count_val(a);
	//while (a > 0)
	//{
	//	//业务处理
	//	a = get_val();
	//	count_val(a);
	//}

	////如果使用逗号表达式，改写：
	//while (a = get_val(), count_val(a), a > 0)
	//{
	//   //业务处理
	//}
//}



//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();//这里就是函数调用操作符
//	return 0;
//}

#include <stdio.h>

struct Book
{
	char name[20];
	float price;
	char id[10];
};

void print1(struct Book b)
{
	printf("书名: %s\n", b.name);
	printf("价格: %f\n", b.price);
	printf("书号: %s\n", b.id);

	//*(b.name);
}

void print2(struct Book* pb)
{
	/*printf("书名: %s\n", (*pb).name);
	printf("价格: %f\n", (*pb).price);
	printf("书号: %s\n", (*pb).id);*/

	printf("书名: %s\n", pb->name);
	printf("价格: %f\n", pb->price);
	printf("书号: %s\n", pb->id);
}

int main()
{
	struct Book b = {"C语言程序设计", 55.5f, "C20190201"};
	print2(&b);
	//print1(b);

	//结构成员访问操作符
	//结构变量.成员名
	//结构体指针->成员名
	//(*结构体指针).成员名

	return 0;
}
