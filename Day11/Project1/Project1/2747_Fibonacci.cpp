#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
	int i;
	int* f = new int(n + 1);
	for (i = 1; i <= n; i++)
		if (i == 1 || i == 2) f[i] = 1;
		else f[i] = f[i - 1] + f[i - 2];
	return f[n];
}

int main(void) {
	int n=0;
	scanf_s("%d", &n);
	printf("%d", fib(n));
	return 0;
}