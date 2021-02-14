#include<stdio.h>
main()
{
	int x, y, z;
	for (x = 1; x <= 9; x++)//for循环的作用：给x,y循环赋值，当x=1时，y=2时，x*y的值赋给Z,以此类推
	{
		for (y = 1; y <= x; y++)
		{
			z = y * x;
			printf("%d*%d=%d ", y, x, z);
		}
		printf("\n");//换行

	}
}
//总结：for循环的嵌套规律:外循环循环一次，内循环循环一周。