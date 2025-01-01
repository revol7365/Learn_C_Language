#include <stdio.h>

/*
도전 프로그래밍
*/


/*
문제 01
*/

void printHexadecimal() {

	int num = 0;

	printf("정수하나를 입력해주세요;");
	scanf_s("%d", &num);

	printf("%xd", num);

}

/*
문제 2
*/

//void printGugudan(int num1, int num2) 
//{
//
//	int startDan = num1 > num2 ? num2 : num1;
//	int endDan = num1 > num2 ? num1 : num2;
//	int is = 1;
//
//	for (; startDan <= endDan; startDan++) {
//
//		is = 1;
//		for (; is <= 9; is ++) {
//			printf("%d * %d = %d \n", startDan, is, startDan * is);
//		}
//		printf("\n");
//	}
//}
//
//int main(void) {
//	int num1, num2;
//
//	printf("정수 두개를 입력해주세요\n");
//	scanf_s("%d %d", &num1, &num2);
//
//	printGugudan(num1, num2);
//
//}


/*
문제 3
*/

//void getGCD(int num1, int num2) {
//
//	int maxNum = num1 < num2 ? num1 : num2;
//	printf("maxNum %d\n", maxNum);
//
//	for (; 0 < maxNum; maxNum--) {
//		printf("maxNum %d\n", maxNum);
//		printf("%d / %d = %d\n", num1, maxNum, num1 % maxNum);
//		printf("%d / %d = %d\n", num2, maxNum, num2 % maxNum);
//
//		if (num1 % maxNum == 0 && num2 % maxNum == 0) {
//			printf("%d와 %d의 최대공약수는 %d\n", num1, num2, maxNum);
//			break;
//		}
//	}
//}
//
//void getGCDUseEuclideanAlgorithm(int num1, int num2) {
//	printf("num1 %d\n", num1);
//	printf("num2 %d\n", num2);
//
//	int maxNum = num1 > num2 ? num1 : num2;
//	int minNum = num1 < num2 ? num1 : num2;
//	int result = -1;
//
//	result = maxNum % minNum;
//	printf("result %d\n", result);
//
//	if (result == 0) 
//	{
//		printf("최대공약수는 %d", minNum);
//	}
//	else {
//		printf("\n");
//		getGCDUseEuclideanAlgorithm(result, minNum);
//	}
//
//}
//
//int main(void) {
//	int num1, num2;
//
//	printf("정수 두개를 입력해주세요\n");
//	scanf_s("%d %d", &num1, &num2);
//
//	getGCDUseEuclideanAlgorithm(num1, num2);
//
//}



/*
문제 4
*/

//void CalBuySmothing(int amount) {
//	// 크림빵 500
//	// 새우깡 700
//	// 콜라 400
//	// 최소 하나씩은 구해야되는 사용가능한 금액은
//	// 총액 - 500*1 - 700 *1 - 400 *1
//	// 3500이면 1900
//
//	int useableAmount1 = amount - 1600;
//	//printf("사용가능한 금액: %d\n", useableAmount1);
//
//	int canBuySaeu = useableAmount1 / 700;
//	//printf("구매할 수 있는 새우깡 최대갯수: %d\n\n", canBuySaeu);
//	//printf("======================================================\n");
//	//printf("======================================================\n");
//	//printf("\n");
//	//printf("\n");
//
//	for (; 0 <= canBuySaeu; canBuySaeu--) {
//		//printf("======================================================\n");
//		//printf("사용가능한 금액: %d\n", useableAmount1);
//		//printf("구매할 새우깡 갯수: %d\n", canBuySaeu);
//
//		int useableAmount2 = useableAmount1 - 500* canBuySaeu;
//		if (useableAmount2 < 0) {
//			break;
//		}
//			
//		int canBuyBread = useableAmount2 / 500;
//		//printf("새우깡 구매 후 사용가능한 금액: %d\n", useableAmount2);
//		//printf("구매할 수 있는 크림빵 최대갯수: %d\n\n", canBuyBread);
//
//		for (; 0 <= canBuyBread; canBuyBread--) {
//			//printf("====================================\n");
//			//printf("사용가능한 금액: %d\n", useableAmount2);
//			//printf("구매할 크림빵 갯수: %d\n", canBuyBread);
//
//			int useableAmount3 = useableAmount2 - 500 * canBuyBread;
//			//printf("사용가능한 금액: %d\n\n", useableAmount3);
//			if (useableAmount3 < 0) {
//				break;
//			}
//			int canBuyCola = useableAmount3 / 400;
//			//printf("구매할 수 있는 콜라 최대갯수: %d\n\n", canBuyCola);
//
//			for (; 0 <= canBuyCola; canBuyCola--) {
//				printf("======================================================------------\n");
//				printf("가지고 있는 금액: %d\n", amount);
//				printf("총 구매 가격: %d\n", (700 * (canBuySaeu + 1)) + (500 * (canBuyBread + 1)) + (400 * (canBuyCola + 1)));
//				if (amount - (700 * (canBuySaeu + 1)) - (500 * (canBuyBread + 1)) - (400 * (canBuyCola + 1)) == 0) {
//					printf("새우깡: %d 크림빵: %d 콜라: %d\n", canBuySaeu + 1, canBuyBread + 1, canBuyCola + 1);
//					printf("성공\n");
//				}
//				else {
//					printf("실패\n");
//				}
//				printf("======================================================------------\n");
//			}
//		}
//
//	}
//
//
//}
//
//
//int main(void) {
//	int amount;
//
//	printf("정수를 입력해주세요\n");
//	scanf_s("%d", &amount);
//
//	CalBuySmothing(amount);
//
//}

/*
문제 5
*/

//void getPrimeNumber(int num) {
//	
//	int primeNumberCount = 0;
//	int number = 2;
//
//	while (primeNumberCount < num)
//	{
//		int number2 = number;
//
//		for (; number2 > 0; number2--) {		
//			//printf("number: %d, number2: %d \n", number, number2);
//			//printf("number 나누기 number2: %d \n", number % number2);
//			if(number % number2 == 0 && number2 != 1 && number != number2){
//				//printf("소수아님\n");
//				break;
//			}
//
//			if (number2 == 1) {
//				printf("number: %d\n", number);
//				printf("소수임\n");
//				primeNumberCount++;
//			}
//		}
//
//		number++;
//	}
//
//}
//
//
//
//int main(void) {
//	int num;
//
//	printf("정수를 입력해주세요\n");
//	scanf_s("%d", &num);
//
//	getPrimeNumber(num);
//
//}


/*
문제 6
*/

//void convertSecondToHMS(int second) {
//
//	int s = second % 60;
//	int m = (second / 60)%60;
//	int h = second / 3600;
//
//	printf("H:%d M:%d S:%d\n", h, m, s);
//
//}
//
//int main(void) {
//	int second;
//
//	printf("초를 입력해주세요\n");
//	scanf_s("%d", &second);
//
//	convertSecondToHMS(second);
//
//}


/*
문제 7
*/

//void getN(int n) {
//
//	int num = 1;
//
//	while (2 << num <= n)
//	{
//		num++;
//	}
//
//	printf("정답: %d\n", 2 << num);
//	printf("정답: %d\n", num);
//
//}
//
//
//int main(void) {
//	int num;
//
//	printf("정수를 입력해주세요\n");
//	scanf_s("%d", &num);
//
//	getN(num);
//}


/*
문제 8
*/

void pow2(int num) {
	static int i = 1;
	i = i * 2;
	if (num != 0) {
		pow2(num - 1);
	}
	else {
		printf("결과는 %d\n", i);
	}
}



int main(void) {
	int num;

	printf("정수를 입력해주세요\n");
	scanf_s("%d", &num);

	pow2(num-1);
}