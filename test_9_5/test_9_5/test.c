#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//	//int ret = 9 / 2;//���� /(����) ���߶���������ִ�е���������
//	//double ret2 = 9 / 2;
//	//double ret3 = 9 / 2.0;//�������и���������ִ�и���������
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
//	printf("%d\n", d);//��ӡ����ԭ���ֵ
//
//	//10000000000000000000000000000001 - ԭ��
//	//11111111111111111111111111111110 - ����
//	//11111111111111111111111111111111 - ����
//
//	return 0;
//}

//int main()
//{
	/*int a = 3;
	int b = -2;
	int c = a & b;
	printf("%d\n", c);*/
	//%d - ˵������Ҫ��ӡc��ֵ�����з��ŵ���ʽ
	//00000000000000000000000000000010 - 3��ԭ��
	// 
	//00000000000000000000000000000011
	//11111111111111111111111111111110
	//00000000000000000000000000000010 �������2
	//
	// 
	//10000000000000000000000000000010 - -2��ԭ��
	//11111111111111111111111111111101 - -2�ķ���
	//11111111111111111111111111111110 - -2�Ĳ���
	

	/*int a = 3;
	int b = -2;
	int c = a | b;
	printf("%d\n", c);*/

	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001 ~ -1


	//int a = 3;
	//int b = -2;
	//int c = a ^ b;//������λ���
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
//	//���������
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//3
//	//���
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//����Ŀɶ��Բ�����
//	//ֻ����������
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
//	//11111111111111111111111111111111 ����λ��λȡ��
//	// 
//	//11111111111111111111111111111110 ����
//	//10000000000000000000000000000001 ԭ��
//	//-1
//	return 0;
//}


//��������
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
//	//int a = (int)3.14;//Ĭ��д���ĸ�������double��,���Կ���ǿ��ת��
//	//printf("%d\n", a);
//	//return 0;
//}


//void test1(int arr[])//���ı������ǣ�int* arr[]��
//{
//	printf("%d\n", sizeof(arr));//��������Ԫ�صĵ�ַ
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//��������������sizeof�ڲ�����������ʾ��������
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
//��������Ľ����ʲô��

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


	////����3
	//a = get_val();
	//count_val(a);
	//while (a > 0)
	//{
	//	//ҵ����
	//	a = get_val();
	//	count_val(a);
	//}

	////���ʹ�ö��ű��ʽ����д��
	//while (a = get_val(), count_val(a), a > 0)
	//{
	//   //ҵ����
	//}
//}



//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();//������Ǻ������ò�����
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
	printf("����: %s\n", b.name);
	printf("�۸�: %f\n", b.price);
	printf("���: %s\n", b.id);

	//*(b.name);
}

void print2(struct Book* pb)
{
	/*printf("����: %s\n", (*pb).name);
	printf("�۸�: %f\n", (*pb).price);
	printf("���: %s\n", (*pb).id);*/

	printf("����: %s\n", pb->name);
	printf("�۸�: %f\n", pb->price);
	printf("���: %s\n", pb->id);
}

int main()
{
	struct Book b = {"C���Գ������", 55.5f, "C20190201"};
	print2(&b);
	//print1(b);

	//�ṹ��Ա���ʲ�����
	//�ṹ����.��Ա��
	//�ṹ��ָ��->��Ա��
	//(*�ṹ��ָ��).��Ա��

	return 0;
}
