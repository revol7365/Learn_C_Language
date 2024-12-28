#include <stdio.h>

/*
P.118
문제 05 - 01

문제 1
*/


//int main(void) {
//
//	int point1x, point1y;
//	int point2x, point2y;
//	int width, height;
//	  
//	printf("첫번째 점의 좌표를 입력해주세요.\n");
//	scanf_s("%d %d", &point1x, &point1y);
//
//	printf("첫번째 점의 좌표 x: %d y:%d.\n", point1x, point1y);
//
//	printf("두번째 점의 좌표를 입력해주세요.\n");
//	scanf_s("%d %d", &point2x, &point2y);
//
//	printf("두번째 점의 좌표 x: %d y:%d.\n", point2x, point2y);
//
//	width = point2x = point1x;
//	height = point2y = point1y;
//
//	printf("사각형의 넓이: %d\n", width*height);
//
//
//	return 0;
//}


/*
문제 2
*/

//int main(void) {
//
//	double num1, num2;
//
//	printf("두개의 실수를 입력해주세요.\n");
//	scanf_s("%lf %lf", &num1, &num2);
//
//	printf("%f + %f = %f \n", num1, num2, num1 +  num2);
//	printf("%f - %f = %f \n", num1, num2, num1 -  num2);
//	printf("%f * %f = %f \n", num1, num2, num1 *  num2);
//	printf("%f / %f = %f \n", num1, num2, num1 /  num2);
//
//
//	return 0;
//}



/*
문제 3

1. 0 ~ 127
2. 1씩 증가한다
3. A가 65 a가 97 32차이 이 간격은 모두 동일하다

*/


/*
문제 4
*/

//int main(void) {
//
//	int num1;
//
//	printf("한개의 아스키코드값에 매칭되는 정수를 입력해주세요.\n");
//	scanf_s("%d", &num1);
//
//	printf("정수값: %d \n아스키코드값: %c", num1, num1);
//
//	return 0;
//}


/*
문제 5
*/

int main(void) {

	char char1;

	printf("한개의 알파벳문자를 입력해주세요.\n");
	scanf_s("%c", &char1);

	printf("정수값: %d \n아스키코드값: %c", char1, char1);

	return 0;
}