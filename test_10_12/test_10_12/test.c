#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//�ַ�ָ��

//int main()
//{
//	int a = 68;
//	int b = 343;
//	printf("%d\n", a % b);
//	return 0;
//}

/*int main()
{
	*///char ch = 'w';
	//char* pc = &ch;//pcָ��һ���ַ��ռ�
	
	//pcǰ����* ָ����pc�Ǹ�ָ�������
	//char����pcָ��ı�����������char���ͣ�

	/*const*/ /*char* p = "hello bit";*///�����ǰ�һ���ַ����ŵ�pָ�����������
	//��������ĸ�ֵ��û����ģ�
	//Ȼ�󣬻ش���������⣺���ǵ�
	//���Ҳ�Ų��£�"hello bit"������10���ַ����Ų����ĸ��ֽڵĿռ䣨char*���������ֽڣ���

	//��δ������˼�ǣ�"hello bit"��һ�������ַ�����������ڴ�ĳ�����
	// ��ʵ���ǰѳ����ַ�����Ԫ�صĵ�ַ��h�ĵ�ַ����ֵ����p��

//	*p = 'w';//�����Ǽ�� char* p = "hello bit"; �ı������쳣�ģ�
//
//	printf("%c\n", *p);// ��������һ�µ����ǲ�����Ԫ�أ���ӡһ�¼��ɣ�
//	printf("%s\n", p);// ��ӡ�����ַ���
//	return 0;
//}

// һ��������
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	
//	return 0;
//}



//��������¼ָ������
// 
//int main()
//{
//	//int* arr[5];//����ָ������
//	//char* arr2[5];//�ַ�ָ������
//	//short* arr3[5];//������ָ������
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//    int* arr2[4] = {&a, &b, &c, &d};
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	//����������Ԫ�صĵ�ַ����������Ԫ�ؾ���ÿ��������Ԫ�ص�ַ
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//ע�⣺�������Ĵ��뿴�������뿴��֮ǰ�ġ�C���Գ��ס����ͣ�
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//�����Ҫ��ӡ���������ÿһ��Ԫ�أ�
//			printf("%d ", parr[i][j]);//parr[i][j] == *(parr[i]+j)
//            
//			//���õ�ԭ����ǣ�p[i] == *(p+i)
//			//ע�⣺���ﲻ�����Ϊ�Ƕ�ά����!
//		}
//		printf("\n");//���в�η���
//	}
//
//	return 0;
//}


int main()
{
	 const char* arr[5] = { "abcdef", "bcdefg", "hehe", "haha", "zhangsan" };
	//	//int i = 0;
	//	//for (i = 0; i < 5; i++)
	//	//{
	//	//	printf("%s\n", arr[i]);
	//	//}
	//	//printf("%s\n", arr[2]);
	//
	//	//int* arr[5];//ָ������
	//	////arr ������������������������Ԫ�صĵ�ַ��int* ���ͱ����ĵ�ַ
	//	//int** p = arr;//ok &arr[0]
	//	//int** p2 = &arr[3];
	//	return 0;
}