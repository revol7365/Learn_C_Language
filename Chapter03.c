#include <stdio.h>

/*
P.74
문제 03-01
*/

// 01번
//int main(void) {
//
//	int num1, num2;
//
//	printf("숫자 입력 : ");
//	// scanf함수가 취약해서 scanf_S 함수로 변경해서 사용하라고 함
//	scanf_s("%d %d", &num1, &num2);
//
//	printf("%d - %d = %d \n", num1, num2, num1-num2);
//	printf("%d * %d = %d \n", num1, num2, num1*num2);
//
//	return 0;
//}


// 02번
//int main(void) {
//
//	int num1, num2, num3;
//
//	printf("숫자 세개 입력 : ");
//	// scanf함수가 취약해서 scanf_S 함수로 변경해서 사용하라고 함
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	printf("%d * %d + %d= %d \n", num1, num2, num3, num1 * num2 + num3);
//
//	return 0;
//}


// 03번
//int main(void) {
//
//	int num1;
//
//	printf("숫자 입력 : ");
//	// scanf함수가 취약해서 scanf_S 함수로 변경해서 사용하라고 함
//	scanf_s("%d", &num1);
//
//	printf("%d * %d= %d \n", num1, num1, num1 * num1);
//
//	return 0;
//}

// 04번
//int main(void) {
//
//	int num1, num2;
//
//	printf("숫자 2개 입력 : ");
//	// scanf함수가 취약해서 scanf_S 함수로 변경해서 사용하라고 함
//	scanf_s("%d %d", &num1, &num2);
//
//	printf("몫    : %d \n", num1 / num2);
//	printf("나머지: %d \n", num1 % num2);
//
//	return 0;
//}


// 05번
int main(void) {

	int num1, num2, num3;

	printf("숫자 3개 입력 : ");
	// scanf함수가 취약해서 scanf_S 함수로 변경해서 사용하라고 함
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("결과: %d \n", result);
	printf("(%d - %d) * (%d + %d) * (%d  %d) = %d \n", num1, num2, num2, num3, num3, num1, ((num1-num2) * (num2+num3) * (num3%num1)));

	return 0;
}