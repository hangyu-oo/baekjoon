#pragma warning(disable:4996)
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {
	double a;
	double b;

	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("%.15lf", a/b);
}
