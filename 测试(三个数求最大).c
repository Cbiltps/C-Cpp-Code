#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("������a,b,c");
    scanf("%d %d %d", &a, &b, &c);

    int t = 0;
    if (a > b)
        t = a;
    else
        t = b;
    if (c > t)
        t = c; //tΪ���ֵ
    printf("%d", c);
}