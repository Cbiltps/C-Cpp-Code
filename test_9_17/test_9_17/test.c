#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//结构体类型——因为不是在创建变量，所以不会占用内存
//struct Book
//{
//	char name[20];//下面的三个属性就是成员变量，每个成员可以是不同类型的
//	char author[15];
//	float price;
//}b1,b2;//b1和b2是全局变量，相当于拿前面结构体类型所创建的变量——放在内存的静态区  
//
//int main()
//{
//	struct Book b;//这里的b虽然是结构体变量，但是是局部变量——放在内存的栈区
//
//	return 0;
//}

//struct tag
//{
//	member_list;
//}variable_list;

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char id[10];
//}Stu;//在使用typedef的时候，对这个结构体类型重新起名字叫Stu
////注意：在没有typedef的时候，分号前面的是结构体变量。
////          有typedef的时候，分号前面的是结构体类型（重新起名字的）。
//
//int main()
//{
//	//那么对这个结构体类型有两种写法：
//	struct Stu B;//用的是没有重新起名字的结构体类型
//	Stu N;//用的是重新起名字的结构体类型，这种写法更加简洁一些
//	
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char id[10];
//}Stu;
//
//int main()
//{
//	struct Stu B = { "张三", 20, "123456" };//就是这样初始化的
//	Stu N = { "李四", 23, "7654323" };
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//struct T
//{
//	struct S s;
//	char name[20];
//	int num;
//};
//
//int main()
//{
//	struct T t = { {100,'c', 3.14}, "lisi", 30 };
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};

struct T
{
	struct S s;
	char name[20];
	int num;
};

int main()
{
	struct T t = { {100, 'w', 3.14}, "zhangsan", 200 };
	printf("%d %c %f %s %d\n", t.s.a, t.s.c, t.s.d, t.name, t.num);

	struct T* pt = &t;
	printf("%d %c %f %s %d\n", pt->s.a, pt->s.c, pt->s.d, pt->name, pt->num);

	return 0;
}