#include <stdio.h>


/*
p.576
문제 26 - 1
문제 1
*/

//#define ADD(x, y, z) ((x)+(y)+(z))
//#define MULTIPLE(x, y, z) ((x)*(y)*(z))
//
//int main(void) {
//
//	int num1;
//	int num2;
//	int num3;
//
//	printf("정수 세개를 입력해주세요\n");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	printf("정수 더하기: %d\n", ADD(num1, num2, num3));
//	printf("정수 곱하기: %d\n", MULTIPLE(num1, num2, num3));
//
//
//	return 0;
//}

/*
문제 2
*/

//#define PI 3.14
//#define CIRCLEAREA(r) ((PI)*(r)*(r))
//
//int main(void) {
//
//	double num;
//
//	printf("원의 반지름을 입력해주세요\n");
//	scanf_s("%lf", &num);
//
//	printf("원의 넓이: %lf\n", CIRCLEAREA(num));
//
//	return 0;
//}


/*
문제 2
*/

#define MOREBIG(a, b) ((a) > (b) ? (a) : (b))

int main(void) {

	int num1;
	int num2;

	printf("정수 두개를 입력해주세요\n");
	scanf_s("%d %d", &num1, &num2);

	printf("큰수: %d\n", MOREBIG(num1, num2));

	return 0;
}