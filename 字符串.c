#include<stdio.h>
int main()
{
	char arr1[] = "abc";//把字符串放到数组里面
	//"abc"--'a','b','c','\0‘——'\0'--是字符串结束的标志
	char arr2[] = { 'a','b','c','\0' };
	//'\0'的值是0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
//数据在计算上存储的时候，存储的是二进制
//#$av等等
//都是用ASCII 编码