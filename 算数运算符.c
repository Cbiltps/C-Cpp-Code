#include<stdio.h>
int main()
{
int a = 21;
int b = 10;
int c;
c = a + b;
printf("line 1 - c 的值是%d\n", c);
c = a - b;
printf("line 2 - c 的值是%d\n", c);
c = a * b;
printf("line 3 - c 的值是%d\n", c);
c = a / b;
printf("line 4 - c 的值是%d\n", c);
c = a % b;
printf("line 5 - c 的值是%d\n", c);
c = a++;//赋值后减1，c为21，a为22
printf("line 6 - c 的值是%d\n", c);
c = a--;//赋值后减1，c为22，a为21
printf("line 7 - c 的值是%d\n", c);
}