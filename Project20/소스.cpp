#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char a = '*';
	char* b = &a;
	printf("주소 = %u, 코드값 = %d, 문자 = %c\n", b, *b, *b);

	return 0;
}