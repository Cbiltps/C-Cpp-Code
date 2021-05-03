#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("请输入a,b,c");
    scanf("%d %d %d", &a, &b, &c);

    int t = 0;
    if (a > b)
        t = a;
    else
        t = b;
    if (c > t)
        t = c; //t为最大值
    printf("%d", c);
}