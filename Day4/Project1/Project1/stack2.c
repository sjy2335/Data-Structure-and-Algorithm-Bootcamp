#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elem;

int stack_top = -1;
elem* stack;

int size()
{
	return stack_top + 1;
}

int empty()
{
	if (stack_top < 0) return 1;
	else return 0;
}

void push(elem item)
{
	stack[++stack_top] = item;
	return;
}

elem pop()
{
	if (empty()) {
		return -1;
	}
	else {
		return stack[stack_top--];
	}
	return;
}

elem top()
{
	return stack[stack_top];
}


int main(void)
{
	int N; 
	//char* cmd = malloc(sizeof(char)*11); //명령어 문자열
	char cmd[11];
	elem newElem = 0;
	scanf_s("%d", &N); //명령 개수
	rewind(stdin);
	// dynamic allocation
	stack = (elem*)malloc(10000*sizeof(elem));

	for (int i = 0; i < N; i++) {
		fgets(cmd, 11, stdin);
		int num1;
		char* cmd1 = NULL;
		char* cmd2 = NULL;
		cmd1 = strtok(cmd, " ");
		cmd2 = strtok(NULL, " ");
		if (cmd2) {
			num1 = atoi(cmd2);
		}

		if (!strcmp(cmd1, "push")) {
			push(num1);
		}
		if (!strcmp(cmd1, "pop")) {
			printf("%d", pop());
		}
		if (!strcmp(cmd1, "size")) {
			size();
		}
		if (!strcmp(cmd1, "empty")) {
			empty();
		}
		if (!strcmp(cmd1, "top")) {
			top();
		}

	}
	free(stack);
	return 0;
}