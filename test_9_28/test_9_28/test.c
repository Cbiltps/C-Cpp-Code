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
void my_strcpy(char* dest, char* src)
{
	/*if (src == NULL || dest == NULL)
	{
		return;
	}*/
	//�����д���ǿ��Եģ������и��õ�д��

	assert(src != NULL);//���� - release�汾�����Ż���
	assert(dest != NULL);

	//assert(src);//����дҲ����
	//assert(dest);

	//assert(src && dest);//����дҲ���ԣ�����

	while (*dest++ = *src++)
	{
		;
	}
}

//5
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���� - release�汾�����Ż���
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���� - release�汾�����Ż���
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
int main()
{
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
	char arr1[] = "abcdef";
    char arr2 = "0";

	char ret = my_strcpy(arr2, arr1);

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