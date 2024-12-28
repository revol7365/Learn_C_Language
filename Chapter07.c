#include <stdio.h>

/*
P.155
문제 07 - 01

문제 1
*/

//int main(void) {
//
//	int num1;
//
//	printf("Hello World!를 프린트 할 횟수를 입력해주세요\n");
//	scanf_s("%d", &num1);
//
//	while (num1>0)
//	{
//		printf("Hello World!\n");
//		num1--;
//	}
//
//	return 0;
//}

/*

문제 2

*/

//int main(void) {
//
//	int num1;
//	int num2 = 1;
//
//	printf("정수를 입력해주세요\n");
//	scanf_s("%d", &num1);
//
//	while (num2 < num1 + 1)
//	{
//		printf("%d\n", 3*num2);
//		num2++;
//	}
//
//	return 0;
//}


/*

문제 3

*/

//int main(void) {
//
//	int isStop = 1;
//	int sumNum = 0;
//
//	while (isStop)
//	{
//		int inputValue = 0;
//
//		printf("정수를 입력해주세요\n");
//		scanf_s("%d", &inputValue);
//
//		sumNum = sumNum + inputValue;
//		isStop = inputValue;
//		
//	}
//
//	printf("총합: %d\n", sumNum);
//
//	return 0;
//}


/*

문제 4

*/

//int main(void) {
//
//	int dan = 0;
//	int num = 9;
//
//
//	printf("몇단을 출력할까요?\n");
//	scanf_s("%d", &dan);
//
//	while (dan > 0)
//	{
//		int inputValue = 0;
//
//		printf("%d * %d = %d\n", dan, num, dan*num);
//
//		dan--;
//
//	}
//
//	return 0;
//}


/*

문제 5

*/

//int main(void) {
//
//	int inputCount = 0;
//	int repeatCount = 0;
//	int totalValue = 0;
//
//
//	printf("몇개 값을 입력받을까요?\n");
//	scanf_s("%d", &repeatCount);
//	inputCount = repeatCount;
//
//	while (repeatCount > 0)
//	{
//		int inputValue = 0;
//
//		printf("정수를 입력해주세요\n");
//		scanf_s("%d", &inputValue);
//
//		totalValue += inputValue;
//
//		repeatCount--;
//
//	}
//
//	printf("평균값: %f", (double)totalValue/inputCount);
//
//
//	return 0;
//}

/*
P.157
문제 07 - 02

문제 1
*/


//int main(void) {
//
//	int repeatCount = 5;
//	int totalValue = 0;
//
//	while (repeatCount > 0)
//	{
//		int inputValue = 0;
//
//		printf("정수를 입력해주세요\n");
//		scanf_s("%d", &inputValue);
//
//
//		if (inputValue > 0) 
//		{
//			totalValue = totalValue + inputValue;
//			repeatCount--;
//		}
//			
//	}
//
//	printf("총합: %d", totalValue);
//
//	return 0;
//}

/*
문제 2
*/

//int main(void) {
//
//	int repeatCount = 0;
//
//	while (repeatCount < 5)
//	{
//
//		int circleCount = repeatCount;
//
//		while (circleCount > 0) {
//			printf("0");
//			circleCount--;
//		}
//
//		printf("*\n");
//
//		repeatCount++;
//	}
//
//	return 0;
//}



/*
P.161
문제 07 - 03

문제 1
*/

//int main(void) {
//
//	//int total = 0, num = 0;
//
//	//do
//	//{
//	//	printf("정수 입력(0 to quit): ");
//	//	scanf_s("%d", &num);
//	//	total += num;
//
//	//}while(num != 0);
//	//printf("합계: %d \n", total);
//
//
//	// 변수 num의 값을 적절히 초기화해서 첫번째 반복조건이 참이 되게 한다
//	//int total = 0, num = 1;
//
//	//while (num) {
//	//	printf("정수 입력(0 to quit): ");
//	//	scanf_s("%d", &num);
//	//	total += num;
//	//}
//	//printf("합계: %d \n", total);
//
//
//	// 반복문 이전에 입력받기
//
//
//	int total = 0, num = 0;
//	printf("정수 입력(0 to quit): ");
//	scanf_s("%d", &num);
//	total += num;
//
//	while (num) {
//		printf("정수 입력(0 to quit): ");
//		scanf_s("%d", &num);
//		total += num;
//	}
//	printf("합계: %d \n", total);
//
//	return 0;
//}

/*
문제 2
*/
//int main(void) {
//
//	int total = 0, num = 100;
//
//	do
//	{
//		total += num;
//		num -=2;
//	}while(num > 0);
//	printf("합계: %d \n", total);
//
//	return 0;
//}

/*
문제 3
*/
//int main(void) {
//
//	// 2단부터 9단까지 출력
//
//	int cur = 2;
//	int is = 1;
//	do
//	{
//		do
//		{
//			printf("%d * %d = %d\n", cur, is, cur * is);
//			is++;
//		} while (is < 10);
//		is = 1;
//		cur++;
//		printf("\n");
//	} while (cur < 10);
//
//	return 0;
//}


/*
P.167
문제 07 - 04

문제 1
*/

//int main(void) {
//
//	int smallNum = 0;
//	int largeNum = 0;
//	int repeatCount = 0;
//	int total = 0;
//
//	printf("두 정수 입력\n");
//	scanf_s("%d %d", &smallNum, &largeNum);
//
//	for (; repeatCount < largeNum - smallNum+1; repeatCount++) {
//		total += smallNum + repeatCount;
//	}
//	printf("total: %d\n", total);
//
//	return 0;
//}

/*
문제 2
*/

int main(void) {

	int num = 0;
	int repeatCount = 1;
	int total = 1;

	printf("정수 한개 입력\n");
	scanf_s("%d", &num);

	for (; repeatCount < num + 1; repeatCount++) {
		total *= repeatCount;
	}
	printf("total: %d\n", total);

	return 0;
}