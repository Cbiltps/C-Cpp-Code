#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//type_t arr_name[const_n];
//type_t ��ָ�����Ԫ������
//const_n ��һ���������ʽ������ָ������Ĵ�С

////����1
//int arr1[10];
// 
////����2
//int count = 10;
//int arr2[count];//����ʱ���������������
// 
////����3
//char arr3[10];
//float arr4[1];
//double arr5[20];


//��������һ��֪ʶ�㲻�� ��������������������
int main()
{
	char password[20] = {0};

	printf("����������:>");
	scanf("%s", password);

	//�ѻ������е�����
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	printf("��ȷ������(Y/N):>");
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}
