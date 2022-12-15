#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int plus(int v1, int v2)
//{
//	int result;
//	result = v1 + v2;
//	return result;
//}

//int a = 100;
//
//void func1()
//{
//	int a = 200;
//	printf("func1()에서 a의 값 => %d\n", a);
//}

//void f1(int a)
//{
//	a += 1;
//	printf("전달 받은 a => %d\n", a);
//}

//void f1(int* a)
//{
//	*a += 1;
//	printf("전달받은 a => %d\n", *a);
//}

void main(void) {
	//string_1.c
	/*char str[10] = " ";
	int i = 0, len = 0;
	printf("문자열 입력 => ");
	scanf("%s", str);

	printf("sizeof(str) / sizeof(char): %1d\n", sizeof(str) / sizeof(char));
	len = strlen(str);
	printf("len: %d\n", len);
	
	for (i = len - 1; i >= 0 ; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");*/

	//string_2.c
	/*char str1[10];
	char str2[10];
	char str3[10] = "CookBook";

	strcpy(str1, "Basic-C");
	strcpy(str2, str3);

	printf("str1 => %s \n", str1);
	printf("str2 => %s \n", str2);
	printf("str3 => %s \n", str3);*/

	//string_3.c
	/*char ss[7] = "XYZ";
	strcat(ss, "ABC");
	printf("이어진 문자열 ss의 내용 => %s\n", ss);*/

	//string_4.c
	/*char s1[10] = "Hello";
	char *s2 = "Hello";
	char *s3 = "World";

	int ret1 = strcmp(s1, s2);
	int ret2 = strcmp(s1, s3);

	printf("ret1: %d\n", ret1);
	printf("ret2: %d\n", ret2);*/

	//string_5.c - strtok(src, del)
	/*char s1[30] = "There is no free lunch";
	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
	return 0;*/

	//function_1.c
	/*int hap;
	hap = plus(100, 200);
	printf("100과 200의 plus()함수 결과는 :%d\n", hap);*/

	//local_global_variables_1.c
	/*func1();
	printf("main에서 a의 값=> %d\n", a);*/

	//call_by_value.c
	/*int a = 10;
	printf("f1() 실행 후 a => %d\n", a);*/

	//call_by_reference.c
	/*int a = 10;
	f1(&a);
	printf("f1() 실행 후 a => %d\n", a);*/

	//pointer_1.c
	/*char ch;
	char* p;
	ch = 'a';
	p = &ch;

	printf("ch => %c\n", ch);
	printf("ch 주소 => %d\n", &ch);
	printf("p => %d\n", p);
	printf("p가 가리키는 곳의 실제 값 => %c\n", *p);*/

	//pointer_2.c
	/*char s[8] = "Basic-C";
	char* p;

	p = s;
	
	printf("&s[3] => %s\n", &s[3]);
	printf("p+3 => %s\n", p+3);

	printf("s[3] => %c\n", s[3]);
	printf("*(p+3) => %c\n", *(p+3));*/

	//pointer_3.c     **
	/*int arr[3][5];
	int *ptr;
	int i, j, x, y;
	ptr = arr;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			*(ptr+i*5+j) = i*5 + j;
			* // *(arr[i]+j)도 가능
		}
	}
	for (i = 0; i < 15; i++)
	{
		x = i / 5;
		y = i % 5;
		printf("arr[%d][%d] = %d\n", x, y, arr[x][y]);
	}*/
}