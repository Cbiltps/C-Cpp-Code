#include<stdio.h>
#include <math.h>
#define  N  20
void printarr(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int i;
	int j;
	int arr[N] = { 1,1 };
	puts("1");
	puts("1 1");
	for (i = 2; i < 10; i++) {
		arr[i] = 1;
		for (j = i - 1; j > 0; j--) {
			arr[j] += arr[j - 1];
		}
		printarr(arr, i + 1);
	}
	return 0;
}