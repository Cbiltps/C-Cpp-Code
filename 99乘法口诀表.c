#include<stdio.h>
main()
{
	int x, y, z;
	for (x = 1; x <= 9; x++)//forѭ�������ã���x,yѭ����ֵ����x=1ʱ��y=2ʱ��x*y��ֵ����Z,�Դ�����
	{
		for (y = 1; y <= x; y++)
		{
			z = y * x;
			printf("%d*%d=%d ", y, x, z);
		}
		printf("\n");//����

	}
}
//�ܽ᣺forѭ����Ƕ�׹���:��ѭ��ѭ��һ�Σ���ѭ��ѭ��һ�ܡ�