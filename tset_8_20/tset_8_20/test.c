#define _CRT_SECURE_NO_DEPRECATE 1

//for (...)
//{
//	for (...)
//	{
//		for (...)
//		{
//			if (disaster)
//				goto error;
//		}
//	}
//}
//��
//error :
//if (disaster)
//// ����������

//ret_type fun_name(para1, *)
//{
//	statement;//�����
//}
//ret_type ��������
//fun_name ������
//para1 ��������

//#include <stdio.h>
////get_max���������
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);//����ʹ����Ŀ������
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

#include <stdio.h>
void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* px, int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	Swap1(num1, num2);
	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
	return 0;
}