#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//relational_operator_1.c
	/*int a = 100, b = 200;
	printf(" %d == %d는 %d이다. \n", a, b, a == b);
	printf(" %d != %d는 %d이다. \n", a, b, a != b);
	printf(" %d > %d는 %d이다. \n", a, b, a > b);
	printf(" %d < %d는 %d이다. \n", a, b, a < b);
	printf(" %d >= %d는 %d이다. \n", a, b, a >= b);
	printf(" %d <= %d는 %d이다. \n", a, b, a <= b);

	printf(" %d = %d는 %d이다. \n", a, b, a = b);*/
	
	//logical_operator_1.c
	/*int a = 99;
	printf("AND 연산: %d \n", (a >= 100) && (a <= 200));
	printf("OR 연산: %d \n", (a >= 100) || (a <= 200));
	printf("NOT 연산: %d \n", !(a >= 100));*/

	//logical_operator_2.c **관계연산자로 조건문 대체**
	//AND 연산자 => 앞 조건 참이면 뒤 명령 실행
	//OR 연산자 => 앞 조건 거짓이면 뒤 명령 실행
	/*char a = 3;
	a > 2 && a++;	
	a > 2 || a++;	
	printf("a = %d\n", a);*/

	//bit_operator

	//bit_operator_1.c
	//char a = 0x41; // == 0100 0001 == 65
	//char b = 0x0F; // == 0000 1111 == 15
	//printf("a & b = %d\n", a & b);
	//printf("a | b = %d\n", a | b);
	//printf("a ^ b = %d\n", a ^ b);
	//printf("a: %d\n", a);
	//printf("b: %d\n", b);

	//bit_operator_2.c
	//char a = 10; //0000 1010
	//printf("a << 1 = %d\n", a << 1);
	//printf("a << 2 = %d\n", a << 2);
	//printf("a >> 1 = %d\n", a >> 1);
	//printf("a >> 2 = %d\n", a >> 2);

	//if_1.c
	/*int a = 200;
	if (a < 100) {
		printf("100보다 작군요..\n");
		printf("참이면 이 문장도 보이겠죠?\n");
	}
	else {
		printf("100보다 크군요..\n");
		printf("거짓이면 이 문장도 보이겠죠?\n");
	}
	printf("프로그램 끝!\n");*/

	//tenary_operator_1.c
	/*int a = 200, b = 100, max = 0;
	if (a >= b) max = a;
	else max = b;
	printf("max = %d\n", max);

	max = 0;
	max = a >= b ? a : b;
	printf("max = %d\n", max);*/

	//switch_1.c
	/*int a;
	printf("1 ~ 4 중에 선택하세요: ");
	fscanf_s(stdin, "%d", &a);
	switch (a)
	{
	case 1:
		printf("1을 선택했다.\n");
		break;
	case 2:
		printf("2를 선택했다.\n");
		break;
	case 3:
		printf("3을 선택했다.\n");
		break;
	case 4:
		printf("4를 선택했다.\n");
		break;
	default:
		printf("이상한 걸 선택했다.\n");
	}*/

	//for_1.c
	/*int hap = 0;
	int i;
	int num;
	printf("값 입력: ");
	fscanf_s(stdin, "%d", &num);

	for (i = 1; i <= num; i++) {
		hap += i;
	}
	printf("1에서 %d까지의 합: %d\n", num, hap);*/

	//for_2.c
	/*int i, k;
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 2; k++) {
			printf("중첩 for문입니다. (i값: %d, k값: %d)\n", i, k);
		}
	}*/
	
	//for_3.c
	/*int i, k;
	for (i = 1, k = 1; i <= 9; i++, k++) {
		printf("%d X %d = %d \n", i, k, i + k);
	}*/

	//while_1.c
	/*int i;
	i = 0;
	while (i < 5) {
		printf("while문을 공부합니다.\n");
		i++;
	}*/

	//while_2.c
	/*int a, b;
	char ch;
	while (1) {

		printf("계산할 두 수를 입력(멈추려면 ctrl+C): ");
		scanf_s("%d %d", &a, &b);
		
		printf("계산할 연산자를 입력: ");
		scanf_s(" %c", &ch);

		switch (ch)
		{
		case '+':
			printf("%d + %d = %d 입니다. \n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d 입니다. \n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d 입니다. \n", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %d 입니다. \n", a, b, a/(float)b);
			break;
		case '%':
			printf("%d %% %d = %d 입니다. \n", a, b, a%b);
			break;
		default:
			printf("연산자를 잘못 입력했습니다.\n");
			break;
		}
	}*/

	//while_3.c
	/*int menu;
	do {
		printf("\n손님 주문하시겠습니까? \n");
		printf("1. 카페라떼 2. 카푸치노 3. 아메리카노 4. 그만시킬래요\n >> ");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1: printf("카페라떼\n"); break;
		case 2: printf("카푸치노\n"); break;
		case 3: printf("아메리카노\n"); break;
		case 4: printf("주문하신 커피 준비하겠습니다.\n"); break;
		default: printf("잘못 주문");
		}
	} while (menu != 4);*/
	
	//break_1.c
	/*int hap = 0;
	int i;
	
	for (i = 1; i <= 100; i++) {
		hap += i;
		if (hap >= 1000) break;

	}
	printf(" %d ", i);*/

	//continue_1.c
	/*int hap = 0;
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0) continue;
		hap += i;
	}
	printf("%d", hap);*/

	//array_1.c
	/*int aa[4] = { 100, 200, 300, 400 };
	int bb[] = { 100, 200, 300, 400 };
	int cc[4] = { 100, 200 };
	int dd[4] = { 0 };
	int i;

	for (i = 0; i <= 3; i++) printf("aa[%d] => %d\n", i, aa[i]);
	printf("\n----------------\n");
	for (i = 0; i <= 3; i++) printf("bb[%d] => %d\n", i, bb[i]);
	printf("\n----------------\n");
	for (i = 0; i <= 3; i++) printf("cc[%d] => %d\n", i, cc[i]);
	printf("\n----------------\n");
	for (i = 0; i <= 3; i++) printf("dd[%d] => %d\n", i, dd[i]);
	printf("\n----------------\n");*/

	//array_2.c
	/*int aa[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	int i, k;
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++)printf("%3d", aa[i][k]);
		printf("\n");
	}*/
}