#include <stdio.h>
int global = 2019;//ȫ�ֱ���
int main()
{
	int local = 2018;//�ֲ�����
	//���涨���global�᲻�������⣿
	int global = 2020;//�ֲ�����
	printf("global = %d\n",global);
	return 0;
}
//�ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
