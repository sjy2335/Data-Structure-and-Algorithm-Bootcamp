#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//relational_operator_1.c
	/*int a = 100, b = 200;
	printf(" %d == %d�� %d�̴�. \n", a, b, a == b);
	printf(" %d != %d�� %d�̴�. \n", a, b, a != b);
	printf(" %d > %d�� %d�̴�. \n", a, b, a > b);
	printf(" %d < %d�� %d�̴�. \n", a, b, a < b);
	printf(" %d >= %d�� %d�̴�. \n", a, b, a >= b);
	printf(" %d <= %d�� %d�̴�. \n", a, b, a <= b);

	printf(" %d = %d�� %d�̴�. \n", a, b, a = b);*/
	
	//logical_operator_1.c
	/*int a = 99;
	printf("AND ����: %d \n", (a >= 100) && (a <= 200));
	printf("OR ����: %d \n", (a >= 100) || (a <= 200));
	printf("NOT ����: %d \n", !(a >= 100));*/

	//logical_operator_2.c **���迬���ڷ� ���ǹ� ��ü**
	//AND ������ => �� ���� ���̸� �� ��� ����
	//OR ������ => �� ���� �����̸� �� ��� ����
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
		printf("100���� �۱���..\n");
		printf("���̸� �� ���嵵 ���̰���?\n");
	}
	else {
		printf("100���� ũ����..\n");
		printf("�����̸� �� ���嵵 ���̰���?\n");
	}
	printf("���α׷� ��!\n");*/

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
	printf("1 ~ 4 �߿� �����ϼ���: ");
	fscanf_s(stdin, "%d", &a);
	switch (a)
	{
	case 1:
		printf("1�� �����ߴ�.\n");
		break;
	case 2:
		printf("2�� �����ߴ�.\n");
		break;
	case 3:
		printf("3�� �����ߴ�.\n");
		break;
	case 4:
		printf("4�� �����ߴ�.\n");
		break;
	default:
		printf("�̻��� �� �����ߴ�.\n");
	}*/

	//for_1.c
	/*int hap = 0;
	int i;
	int num;
	printf("�� �Է�: ");
	fscanf_s(stdin, "%d", &num);

	for (i = 1; i <= num; i++) {
		hap += i;
	}
	printf("1���� %d������ ��: %d\n", num, hap);*/

	//for_2.c
	/*int i, k;
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 2; k++) {
			printf("��ø for���Դϴ�. (i��: %d, k��: %d)\n", i, k);
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
		printf("while���� �����մϴ�.\n");
		i++;
	}*/

	//while_2.c
	/*int a, b;
	char ch;
	while (1) {

		printf("����� �� ���� �Է�(���߷��� ctrl+C): ");
		scanf_s("%d %d", &a, &b);
		
		printf("����� �����ڸ� �Է�: ");
		scanf_s(" %c", &ch);

		switch (ch)
		{
		case '+':
			printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %d �Դϴ�. \n", a, b, a/(float)b);
			break;
		case '%':
			printf("%d %% %d = %d �Դϴ�. \n", a, b, a%b);
			break;
		default:
			printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
			break;
		}
	}*/

	//while_3.c
	/*int menu;
	do {
		printf("\n�մ� �ֹ��Ͻðڽ��ϱ�? \n");
		printf("1. ī��� 2. īǪġ�� 3. �Ƹ޸�ī�� 4. �׸���ų����\n >> ");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1: printf("ī���\n"); break;
		case 2: printf("īǪġ��\n"); break;
		case 3: printf("�Ƹ޸�ī��\n"); break;
		case 4: printf("�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); break;
		default: printf("�߸� �ֹ�");
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