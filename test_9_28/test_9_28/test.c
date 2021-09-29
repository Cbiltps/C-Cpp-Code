#define _CRT_SECURE_NO_DEPRECATE 1

#include <string.h>
#include <stdio.h>

//dest ��ָ��Ŀ��ռ��
//src  ��ָ��Դ�ַ�����
//
//1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//\0
//}
//
//2
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//\0
//}
//
//3
//void my_strcpy(char* dest, char* src)
//{
//	1. �����ַ�
//	2. ����\0 ѭ��ֹͣ
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

#include <assert.h>

//4
//void my_strcpy(char* dest, char* src)
//{
//	/*if (src == NULL || dest == NULL)
//	{
//		return;
//	}*/
//	//�����д���ǿ��Եģ������и��õ�д��
//
//	//assert(src != NULL);//���� - release�汾�����Ż���
//	//assert(dest != NULL);
//
//	//assert(src);//����дҲ����
//	//assert(dest);
//
//	//assert(src && dest);//����дҲ���ԣ�����
//
//	//while (*dest++ = *src++)
//	//{
//	//	;
//	//}
//}

//5
//void my_strcpy(char* dest, const char* src)//const��*src�����޸�
//{
//	assert(src != NULL);//���� - release�汾�����Ż���
//	assert(dest != NULL);
//
//	while (*src++ = *dest++ )//�����д�����ʱ�򣬲�С�İ�����д����
//	{
//		;
//	}
//}

char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);
	assert(dest != NULL);

	char* temporary = dest;

	while (*dest++ = *src++)
	{
		;
	}
	return temporary;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[10]= "xxxxxxxxx";

	char* ret = my_strcpy(arr2, arr1);
	printf("%s\n", ret);

	return 0;
}

//int main()
//{
//	//strcpy - string copy - �ַ�������
//	char arr1[] = "abcdef";//[a b c d e f \0]
//	char arr2[10] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}



//һ��const��֪ʶ
//int main()
//{
//	const int num = 10;
//	//num = 20; error
//
//	//const����ָ��
//	int* ret = &num;
//	*ret = 20;
//
//	printf("%d\n", num);
//
//	return 0;
//}

// const ����ָ��
	//const ����*�����
	//���ε���ָ��ָ�������(*p),ָ��ָ������ݣ�����ͨ��ָ�����ı�
	//����ָ����������ǿ��Ըı��
	//int n = 100;
	//const int*  p = &num;  //int const*  p = &num;
	//*p = 20;//err
	//p = &n;//ok

	//const ����*���ұ�
	//���ε���ָ���������(p),ָ���������p�������޸��� 
	//����ָ��ָ�������(*p)�����޸�
	//
	//int n = 100;
	//int* const p = &num;
	//*p = 20;//ok
	//p = &n;//err

//strcpy - string copy - �ַ�������
	//1
	//char arr1[] = "abcdef";//[a b c d e f \0]
	//char arr2[10] = "xxxxxxxxx";

	//2 - Դ�ַ�����һ��Ҫ��\0
	//char arr1[] = { 'a', 'b', 'c' };
	//char arr2[10] = "xxxxxxxx";

	//3 - Ŀ��ռ�����㹻��
	//char arr1[] = "abcdef";
	//char arr2[3] = { 0 };

	//4. Ŀ��ռ䣬������޸�
//char arr1[] = "abcdef";
//const char* arr2 = "xxxxxxxxxxx";//Ŀ��ռ�û���޸ģ��޷�����