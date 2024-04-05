#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a;
	printf("대문자를 입력하세요 : ");
	scanf("%c", &a);
	printf("소문자는 %c입니다.", a + 32);
}