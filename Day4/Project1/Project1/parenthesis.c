#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int top;
int correct;

void push() {
	top++;
}

void pop() {
	if (top == -1) correct = 0;
	else top--;
}

int main(void) {
	int n = 0;
	char* ps;

	ps = (char*)malloc(50*sizeof(char));

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		correct = 1;
		top = -1;
		scanf("%s", ps);
		for (int j= 0; j < strlen(ps); j++) {
			switch (ps[j]) {
			case '(':
				push();
				break;
			case ')':
				pop();
				break;
			default:
				break;
			}
		}
		if (top == -1 && correct) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}