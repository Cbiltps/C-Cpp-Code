#include<stdio.h>
int main()
{
	int day,peach;
	peach=1;
	for(day=9;day>=1;day--)
		peach=(peach+1)*2;
	printf("The first day:%d\n",peach);
	return 0;
}