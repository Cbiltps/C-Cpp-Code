#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//�ṹ�����͡�����Ϊ�����ڴ������������Բ���ռ���ڴ�
//struct Book
//{
//	char name[20];//������������Ծ��ǳ�Ա������ÿ����Ա�����ǲ�ͬ���͵�
//	char author[15];
//	float price;
//}b1,b2;//b1��b2��ȫ�ֱ������൱����ǰ��ṹ�������������ı������������ڴ�ľ�̬��  
//
//int main()
//{
//	struct Book b;//�����b��Ȼ�ǽṹ������������Ǿֲ��������������ڴ��ջ��
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
//}Stu;//��ʹ��typedef��ʱ�򣬶�����ṹ���������������ֽ�Stu
////ע�⣺��û��typedef��ʱ�򣬷ֺ�ǰ����ǽṹ�������
////          ��typedef��ʱ�򣬷ֺ�ǰ����ǽṹ�����ͣ����������ֵģ���
//
//int main()
//{
//	//��ô������ṹ������������д����
//	struct Stu B;//�õ���û�����������ֵĽṹ������
//	Stu N;//�õ������������ֵĽṹ�����ͣ�����д�����Ӽ��һЩ
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
//	struct Stu B = { "����", 20, "123456" };//����������ʼ����
//	Stu N = { "����", 23, "7654323" };
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