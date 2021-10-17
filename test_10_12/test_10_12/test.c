#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//字符指针

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
	//char* pc = &ch;//pc指向一个字符空间
	
	//pc前面有* 指的是pc是个指针变量！
	//char代表pc指向的变量的类型是char类型！

	/*const*/ /*char* p = "hello bit";*///这里是把一个字符串放到p指针变量里了吗？
	//首先上面的赋值是没问题的！
	//然后，回答上面的问题：不是的
	//想放也放不下，"hello bit"里面是10个字符，放不进四个字节的空间（char*类型是四字节）！

	//这段代码的意思是："hello bit"是一个常量字符串，存放在内存的常量区
	// 其实就是把常量字符串首元素的地址（h的地址）赋值给了p！

//	*p = 'w';//这里是检测 char* p = "hello bit"; 改变引发异常的！
//
//	printf("%c\n", *p);// 如果想测试一下到底是不是首元素，打印一下即可！
//	printf("%s\n", p);// 打印整个字符串
//	return 0;
//}

// 一道笔试题
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



//接下来记录指针数组
// 
//int main()
//{
//	//int* arr[5];//整形指针数组
//	//char* arr2[5];//字符指针数组
//	//short* arr3[5];//短整型指针数组
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
//	//数组名是首元素的地址，所以数组元素就是每个数组首元素地址
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//注意：如果下面的代码看不懂，请看我之前的【C语言初阶】博客！
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//如果想要打印整型数组的每一个元素：
//			printf("%d ", parr[i][j]);//parr[i][j] == *(parr[i]+j)
//            
//			//采用的原理就是：p[i] == *(p+i)
//			//注意：这里不能理解为是二维数组!
//		}
//		printf("\n");//换行层次分明
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
	//	//int* arr[5];//指针数组
	//	////arr 是数组名，数组名是数组首元素的地址，int* 类型变量的地址
	//	//int** p = arr;//ok &arr[0]
	//	//int** p2 = &arr[3];
	//	return 0;
}