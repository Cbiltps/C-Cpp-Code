#define _CRT_SECURE_NO_DEPRECATE 1

//ģ��ʵ�� my_strlen

#include <assert.h>
#include <stdio.h>

//size_t ���ʾ��� unsigned int
//����д������������һ��
size_t my_strlen(const char* s)
{
	assert(s != NULL);
	int count = 0;
	while (*s++)
	{
		count++;
	}

	return count;
}

int main()
{
	char arr[] = "qwer";
	int ret = my_strlen(arr);
	printf("%d\n", ret);

	return 0;
}