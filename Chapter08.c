#include <stdio.h>

/*
P.189
문제 08 - 01

문제 1
*/

//int main(void) {
//
//	int i = 1;
//
//	for (;i < 100; i++) {
//		if (i%7 == 0 || i%9 == 0) {
//			printf("7의 배수이거나 9의 배수 %d\n", i);
//		}
//	}
//	return 0;
//}


/*
문제2
*/
//int main(void) {
//
//	int num1, num2;
//	int result = 0;
//
//	printf("두개의 정수 입력\n");
//	scanf_s("%d %d", &num1, &num2);
//
//	result = num1 - num2;
//
//	if (result >=0) {
//		printf("결과: %d", result);
//	}
//	else {
//		printf("결과: %d", result*-1);
//	}
//
//	return 0;
//}

/*
문제3
*/
//int main(void) {
//
//	int num1, num2, num3;
//	int result = 0;
//
//	printf("세개의 정수 입력\n");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	result = (num1 + num2 + num3) / 3;
//
//	if (result >= 90) {
//		printf("학점 A");
//	}
//	else if (result >= 80) 
//	{
//		printf("학점 B");
//	} 
//	else if (result >= 70) 
//	{
//		printf("학점 C");
//	}
//	else if (result >= 50)
//	{
//		printf("학점 D");
//	}
//	else {
//		printf("학점 낙제");
//	}
//
//	return 0;
//}


/*
문제4
*/
//int main(void) {
//
//	int num1, num2;
//	int result = 0;
//	
//	printf("두개의 정수 입력\n");
//	scanf_s("%d %d", &num1, &num2);
//	
//	result = num1 - num2;
//
//	printf("결과: %d", result >= 0 ? result : result*-1);
//
//	return 0;
//}


/*
P.193
문제 08 - 02

문제 1
*/

//int main(void) {
//
//	int dan = 2;
//	int is = 1;
//
//	for (; dan <= 8; dan++) {
//
//		if (dan%2 != 0)
//			continue;
//
//		is = 1;
//		for (; is <= 8; is++) {
//			printf("%d * %d = %d\n", dan, is, dan * is);
//			if (dan == is) {
//				printf("\n");
//				break;
//			}
//		}
//
//	}
//
//	return 0;
//}
 


/*
문제 2
*/

//int main(void) {
//
//	int a = 0, z = 0;
//
//	for (; a < 10; a++) {
//
//		for (; z < 10; z++) {
//
//			if (99 == (a * 10) + (z * 10)+a+z) {
//				printf("a: %d z: %d\n", a, z);
//			}
//			
//		}
//
//	}
//
//	return 0;
//}


/*
P.200
문제 08 - 03

문제 1
*/

int main(void) {

	int num;

	printf("정수 하나 입력\n");
	scanf_s("%d", &num);

	switch (num/10)
	{
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	case 3:
		printf("30이상 40미만");
		break;
	case 4:
		printf("40이상 50미만");
		break;

	default:
		break;
	}

	return 0;
}