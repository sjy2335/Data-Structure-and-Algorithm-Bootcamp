#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
	int i, n, M = -1000000, m = 1000000;
	int* ptr;
	scanf_s("%d", &n);

	ptr = (int*)calloc(n, sizeof(int));

	for (i = 0; i < n ; i++)
	{
		scanf_s("%d", ptr+i);
	}

	for (i = 0; i < n; i++)
	{
		if (M < *(ptr + i)) M = *(ptr + i);
		if (m > *(ptr + i)) m = *(ptr + i);
	}

	printf("%d %d", m, M);
}