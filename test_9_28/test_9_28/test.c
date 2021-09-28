#define _CRT_SECURE_NO_DEPRECATE 1

#include <string.h>
#include <stdio.h>

//dest 是指向目标空间的
//src  是指向源字符串的
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
//	1. 拷贝字符
//	2. 遇到\0 循环停止
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
	//上面的写法是可以的，但是有更好的写法

	assert(src != NULL);//断言 - release版本可以优化掉
	assert(dest != NULL);

	//assert(src);//这样写也可以
	//assert(dest);

	//assert(src && dest);//这样写也可以，更简单

	while (*dest++ = *src++)
	{
		;
	}
}

//5
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言 - release版本可以优化掉
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
//	assert(src != NULL);//断言 - release版本可以优化掉
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
	//strcpy - string copy - 字符创拷贝
	//1
	//char arr1[] = "abcdef";//[a b c d e f \0]
	//char arr2[10] = "xxxxxxxxx";

	//2 - 源字符串中一定要有\0
	//char arr1[] = { 'a', 'b', 'c' };
	//char arr2[10] = "xxxxxxxx";

	//3 - 目标空间必须足够大
	//char arr1[] = "abcdef";
	//char arr2[3] = { 0 };

	//4. 目标空间，必须可修改
	char arr1[] = "abcdef";
    char arr2 = "0";

	char ret = my_strcpy(arr2, arr1);

	printf("%s\n", ret);

	return 0;
}

//int main()
//{
//	//strcpy - string copy - 字符创拷贝
//	char arr1[] = "abcdef";//[a b c d e f \0]
//	char arr2[10] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}