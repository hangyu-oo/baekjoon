#pragma warning(disable:4996) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	int sum = 0;
	
	scanf("%d", &n);

	for (int i = 0; i <= n; i++){
		sum = sum + i;
		}
	printf("%d\n", sum);
	return 0;
}