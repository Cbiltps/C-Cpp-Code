#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>

int Strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else return 1 + Strlen(str + 1);
}

int main()
{
	char* p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);

	return 0;
}