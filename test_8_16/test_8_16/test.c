#define _CRT_SECURE_NO_WARNINGS 1

//����1
//if (condition) {
//	return x;
//}
//return y;
////����2
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
//
////����3
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
////����4
//int num = 1;
//if (num == 5)
//{
//	printf("hehe\n");
//}
////����4
//int num = 1;
//if (5 == num)
//{
//	printf("hehe\n");
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 1)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������")��
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d������\n", num);
//		}
//		num += 2;
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("weekday\n");
//		break;
//	case 2:
//		printf("weekday\n");
//		break;
//	case 3:
//		printf("weekday\n");
//		break;
//	case 4:
//		printf("weekday\n");
//		break;
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//		printf("weekend\n");
//		break;
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}

//
//
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//for(i=1/*��ʼ��*/; i<=10/*�жϲ���*/; i++/*��������*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}

	return 0;
}