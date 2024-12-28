#include <stdio.h>

/*
P.221
문제 09 - 01

문제 1
*/

//int returnSmallNum(int num1, int num2, int num3) {
//
//	if (num1 < num2 && num1 < num3) {
//		return num1;
//	}
//	else if (num2 < num1 && num2 < num3) {
//		return num2;
//
//	}
//	else if (num3 < num2 && num3 < num1) 
//	{
//		return num3;
//	}
//	
//}
//
//int returnBigNum(int num1, int num2, int num3) {
//	if (num1 > num2 && num1 > num3) {
//		return num1;
//	}
//	else if (num2 > num1 && num2 > num3) {
//		return num2;
//
//	}
//	else if (num3 > num2 && num3 > num1)
//	{
//		return num3;
//	}
//}
//
//int main(void) {
//
//	int num1, num2, num3;
//
//	printf("정수 세개 입력해주세요.\n");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//
//	printf("가장 작은 정수는 %d\n", returnSmallNum(num1, num2, num3));
//	printf("가장 큰 정수는   %d\n", returnBigNum(num1, num2, num3));
//
//	return 0;
//}

/*
문제 02
*/

//// 섭씨 -> 화씨
//double CelToFah(double cel) {
//	// Fah = 1.8*cel +32
//	double fah = (1.8 * cel) + 32;
//	return fah;
//}
//
//// 화씨 -> 섭씨
//double FahToCel(double fah) {
//	// cel = fah-32/1.8
//	double cel = (fah - 32) / 1.8;
//	return cel;
//}
//
//int main(void) {
//
//	double cel, fah;
//
//
//	printf("화씨로 변환할 섭씨 온도를 입력해주세요\n");
//	scanf_s("%lf", &cel);
//
//
//	printf("섭씨로 변환할 화씨 온도를 입력해주세요\n");
//	scanf_s("%lf", &fah);
//
//	printf("입력받은 섭씨 온도: %f -> 변환한 화씨 온도: %f\n", cel, CelToFah(cel));
//
//	printf("입력받은 화씨 온도: %f -> 변환한 섭씨 온도: %f\n", fah, FahToCel(fah));
//
//	return 0;
//}

/*
문제 03
*/

//void printFibo(int count) {
//
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = 0;
//	int i = 0;
//
//	if (count == 1)
//	{
//		printf("%d\n", f1);
//		return;
//	}
//	else
//		printf("%d\n %d\n", f1, f2);
//
//	for (; count - 2 > i; i++) {
//		f3 = f1 + f2;
//		printf("%d\n", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//
//}
//
//
//
//int main(void) {
//
//	int count = 0;
//
//	printf("출력한 피보나치 수열 갯수를 입력해주세요\n");
//	scanf_s("%d", &count);
//
//	printFibo(count);
//
//
//	return 0;
//}


/*
P.237
문제 09 - 02

문제 1
*/
//int total = 0;

int AddToTotal(int num)
{
	static int total = 0; 
	total += num;
	return total;
}

int main(void) 
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("입력%d: ", i + 1);
		scanf_s("%d", &num);
		printf("누적 %d \n", AddToTotal(num));
	}
	return 0;
}