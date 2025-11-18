#pragma warning(disable:4996) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);

	if (90 <= a && a <= 100)
		printf("A");
	else if (80 <= a)
		printf("B");
	else if (70 <= a)
		printf("C");
	else if (60 <= a)
		printf("D");
	else if (a <= 59)
		printf("F");
	return 0;
}		