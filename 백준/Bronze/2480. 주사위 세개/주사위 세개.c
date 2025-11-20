#pragma warning(disable:4996) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	int prize = 0;
	int same;
	int max;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		prize = 10000 + (a *1000);
	}
	else if (a == b || a == c || b == c) {
		if (a == b)
			same = a;
		else if (a == c)
			same = a;
		else same = b;
		prize = 1000 + same * 100;
	} 
	else {
		int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	prize = max * 100;
}		

	printf("%d\n", prize);
return 0;
}