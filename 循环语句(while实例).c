#include<stdio.h>
int main()
{
	printf("喜欢一个人\n");
	int line = 0;
	while (line <= 99)
	{
		line++;
			printf("我要继续努力然后向你表白: %d\n",line);
	}
	if (line>99)
		printf("迎娶白富美\n");
	return 0;
}