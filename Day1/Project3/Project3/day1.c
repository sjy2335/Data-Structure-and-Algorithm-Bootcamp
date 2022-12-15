#define _CRT_NO_SECURE_NO_
#include <stdio.h>
#include <string.h>

int main(void) {
	//scanf.c
	/*int a, b;
	int result;

	printf("첫 번째 계산할 값 입력: ");
	fscanf_s(stdin, "%d", &a);

	printf("두 번째 계산할 값 입력: ");
	fscanf_s(stdin, "%d", &b);

	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result);*/

	//variable_1.c
	/*int a;
	float b;
	a = 123.45;
	b = 200;
	printf("a의 값 => %d \n", a);
	printf("b의 값 => %f \n", b);*/

	//1 바이트 -> 8 비트... int는 4 바이트 -> 2^32개 정보 표현 가능

	//string_1.c
	/*char str1[10];
	char str2[10];
	char str3[10] = "CookBook";

	strcpy(str1, "Basic-C");
	strcpy(str2, str3);

	printf("str1 => %s \n", str1);
	printf("str2 => %s \n", str2);
	printf("str3 => %s \n", str3);*/

	//arithmetic_operator2.c
	/*int a = 2, b = 3, c = 4;
	int result1, mok, namerji;
	float result2;

	result1 = a + b - c;
	printf("%d + %d - %d = %d \n", a, b, c, result1);

	result1 = a + b * c;
	printf("%d + %d * %d = %d \n", a, b, c, result1);

	result2 = a + b /(float) c;
	printf("%d + %d - %d = %f \n", a, b, c, result2);

	mok = c / b;
	printf("%d %% %d의 몫은 %d \n", c,b , mok);

	namerji = c % b;
	printf("%d %% %d의 나머지는 %d \n", c, b, result1);*/

	//arithmetic_operator3.c
	/*int num1 = 2;
	int num2;
	int num3;
	int num4 = 2, num5 = 2;

	num2 = num1++;
	num3 = ++num1;

	printf("%d %d %d\n", num1 , num2, num3);
	printf("%d %d \n", num4++, ++num5);
	printf("%d %d \n", num4, num5);
	return 0;*/
}