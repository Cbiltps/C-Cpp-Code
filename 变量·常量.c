#include <stdio.h>
int global = 2019;//全局变量
int main()
{
	int local = 2018;//局部变量
	//下面定义的global会不会有问题？
	int global = 2020;//局部变量
	printf("global = %d\n",global);
	return 0;
}
//局部变量和全局变量的名字相同时，局部变量优先
