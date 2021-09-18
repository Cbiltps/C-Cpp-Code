#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
//
//struct S
//{
//	int arr[100];
//	int num;
//	char ch;
//	double d;
//};
//
//void print1(struct S ss)
//{
//	printf("%d %d %d %d %c %lf\n", ss.arr[0], ss.arr[1], ss.arr[2], ss.num, ss.ch, ss.d);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5}, 100, 'w', 3.14};
//	print1(s);
//	return 0;
//}









//struct S
//{
//	int arr[100];
//	int num;
//	char ch;
//	double d;
//};
//
//void print2(struct S* ps)
//{
//	printf("%d %d %d %d %c %lf\n", ps->arr[0], ps->arr[1], ps->arr[2], ps->num, ps->ch, ps->d);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5}, 100, 'w', 3.14 };
//	print2(&s);//4¸ö×Ö½Ú
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);

	return 0;
}