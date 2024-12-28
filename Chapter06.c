#include <stdio.h>

/*
P.1
문제 06 - 01

문제 1
*/




int main(void) {

	char char1;

	printf("한개의 알파벳문자를 입력해주세요.\n");
	scanf_s("%c", &char1);

	printf("정수값: %d \n아스키코드값: %c", char1, char1);

	return 0;
}