#include<stdio.h>
int main()
{
int a = 21;
int b = 10;
int c;
c = a + b;
printf("line 1 - c ��ֵ��%d\n", c);
c = a - b;
printf("line 2 - c ��ֵ��%d\n", c);
c = a * b;
printf("line 3 - c ��ֵ��%d\n", c);
c = a / b;
printf("line 4 - c ��ֵ��%d\n", c);
c = a % b;
printf("line 5 - c ��ֵ��%d\n", c);
c = a++;//��ֵ���1��cΪ21��aΪ22
printf("line 6 - c ��ֵ��%d\n", c);
c = a--;//��ֵ���1��cΪ22��aΪ21
printf("line 7 - c ��ֵ��%d\n", c);
}