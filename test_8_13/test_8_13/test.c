#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001
//	//E为全0
//	//E直接就是1-127 = -126
//	//M = 0.00000000000000000001001
//	//0.00000000000000000001001 * 2^-126
//	//
//	float* pFloat = (float*)&n;
//
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//(-1)^0 * 1.001*2^3
//	//S=0
//	//E = 3
//	//M = 1.001
//	//01000001000100000000000000000000
//	printf("num的值为：%d\n", n);//1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//
//	return 0;
//

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = -1;
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	printf("%u", a);
//	return 0;
//}

int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}
