#include <stdio.h>

/*
p.284
문제 12 - 1
문제 1
*/

//int main() {
//	int num = 10; // 변수 10 할당
//	int* ptr1 = &num; // 변수 num의 메모리 주소 저장
//	int* ptr2 = ptr1; // 변수 num의 메모리 주소 저장
//
//	// ptr1과 ptr2은 같은 값
//
//	(*ptr1)++; // 변수 num에 플러스
//	(*ptr2)++; // 변수 num에 플러스
//	printf("%d\n", num); // 예상값 12
//	return 0;
//}

/*
문제 1
*/

int main() {

	int num1 = 10;
	int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	int* tempPtr;

	tempPtr = ptr1;
	ptr1 = ptr2;
	ptr2 = tempPtr;

}