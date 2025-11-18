#pragma warning(disable:4996) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A;
	int B;

	scanf("%d", &A);
	scanf("%d", &B);

	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else 
		printf("==");

	return 0;
}		