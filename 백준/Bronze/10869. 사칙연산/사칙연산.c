#pragma warning(disable:4996) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int A, B;

	scanf("%d %d", &A, & B);
	printf("%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A/B, A % B);
	return 0;
}