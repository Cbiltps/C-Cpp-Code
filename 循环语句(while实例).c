#include<stdio.h>
int main()
{
	printf("ϲ��һ����\n");
	int line = 0;
	while (line <= 99)
	{
		line++;
			printf("��Ҫ����Ŭ��Ȼ��������: %d\n",line);
	}
	if (line>99)
		printf("ӭȢ�׸���\n");
	return 0;
}