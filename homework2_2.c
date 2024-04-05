#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	const int THREE = 3;
	int a;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("3을 더한 숫자 : %d", a + THREE);
}