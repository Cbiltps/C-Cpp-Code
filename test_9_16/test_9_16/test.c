#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

int main()
{
	//结构体类型——因没有在创建变量，所以不会占用内存
	struct Boook
	{
		char name[20];//下面的三个属性就是成员变量，每个成员可以是不同类型的
		char author[15];
		float price;
	};//这里要加一个 ;

	return 0;
}


//struct tag
//{
//	member_list;
//}variable_list;