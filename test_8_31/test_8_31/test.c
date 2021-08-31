#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}

//getchar是读取字符
//为什么返回类型是 int 呢？
//1.既然 getchar 返回的是字符，其实返回的是字符的 ascii 码值（整数）
//2.getchar 在 读取结束或者失败的时候，会返回 EOF
//EOF等于 end of file 它的本质其实是一个数字 -1 是一个整数