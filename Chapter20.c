#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
p.  406
도전 프로그래밍 3

문제 1
*/


//void PrintArr(int (*aptr)[4]) {
//	printf("\n");
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", aptr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//
//void RotationArray(int* (*aptr)[4]) {
//	PrintArr(aptr);
//
//	// 회전 할 때마다
//	//  x = y, y = max - x가 된다
//
//	printf("매개변수로 받은 2차원 배열의 주소값: %d\n", aptr);
//
//	int tempAr[4][4];
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			tempAr[j][3 - i] = aptr[i][j];
//		}
//	}
//
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			aptr[i][j] = tempAr[i][j];
//		}
//	}
//
//	PrintArr(aptr);
//}
//
//
//int main(void) {
//
//	int arr[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
//
//	printf("2차원 배열의 주소값: %d\n", &arr);
//
//	RotationArray(&arr);
//
//	printf("2차원 배열의 주소값: %d\n", &arr);
//
//	RotationArray(&arr);
//
//}

/*
문제 2
*/

//void InputArr(int num) {
//	printf("InputArr ==== \n");
//
//	for (int i = 1; num * num > i; i++) {
//		printf("입력값: %d \n", i);
//
//
//	}
//
//}
//
//void ShowArr() {
//
//}
//
//int main(void) {
//
//	int num;
//
//	printf("정수 한개를 입력해주세요. \n");
//	scanf_s("%d", &num);
//	printf("%d x %d 배열\n", num, num);
//	InputArr(num);
//}


/*
문제 3
*/

//int main(void) 
//{
//	int i;
//	
//	printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);
//	
//	for (i = 0; i < 5; i++)
//		printf("난수 출력: %d \n", rand()%100);
//	
//	return 0;
//}


/*
문제 4
*/

//int main(void)
//{
//	int i;
//
//	srand((int)time(NULL));
//	for (i = 1; i < 3; i++) {
//		printf("주사위 %d의 결과 %d \n", i, rand() % 6 + 1);
//	}
//
//	return 0;
//}

/*
문제 5
*/

//void printKind(char *str, int num) {
//	switch (num)
//	{
//	case 1:
//		printf("%s는 바위를 고르셨습니다.\n", str);
//		break;
//	case 2:
//		printf("%s는 가위를 고르셨습니다.\n", str);
//		break;
//	case 3:
//		printf("%s는 보를 고르셨습니다.\n", str);
//		break;
//	default:
//		break;
//	}
//}
//
//
//int main(void)
//{
//	int userNum;
//	int computer;
//
//	int win = 0;
//	int draw = 0;
//	int loss = 0;
//
//	while (loss < 1) {
//		printf("바위: 1, 가위: 2, 보: 3 \n 셋중에 하나를 입력해주세요\n");
//		scanf_s("%d", &userNum);
//
//		printKind("유저", userNum);
//
//		srand((int)time(NULL));
//		computer = rand() % 3 + 1;
//
//		printKind("컴퓨터", computer);
//
//		if (userNum == computer) 
//		{
//			draw++;
//		}
//		else {
//			if (userNum == 1 && computer == 2)
//				win++;
//			else if (userNum == 1 && computer == 3)
//				loss++;
//			else if (userNum == 2 && computer == 1)
//				loss++;
//			else if (userNum == 2 && computer == 3)
//				win++;
//			else if (userNum == 3 && computer == 1)
//				win++;
//			else if (userNum == 3 && computer == 2)
//				loss++;
//		}
//
//		printf("전적  %d승 %d무 %d패\n\n", win, draw, loss);
//
//	}
//
//}


/*
문제 6
*/


int main(void)
{
	int playerNumber[3];
	int computerNumber[3];

	srand((int)time(NULL));

	// 컴퓨터 숫자 세개 배정
	for (int i = 0; i < 3; i++) {
		computerNumber[i] = rand() % 10;
	}

	// 컴퓨터 숫자 보기
	for (int i = 0; i < 3; i++) {
		printf("%d \n", computerNumber[i]);
	}

	printf("\n");

	int strike = 0;
	int ball = 0;

	while (strike < 3) {

		// 유저 숫자 선택
		for (int i = 0; i < 3; i++) {
			printf("0~9까지 숫자를 입력해주세요\n");
			scanf_s("%d", &playerNumber[i]);
		}

		printf("\n\n 유저 숫자 \n");

		// 유저 숫자 보기
		for (int i = 0; i < 3; i++) {
			printf("%d \n", playerNumber[i]);
		}


		for (int i = 0; i < 3; i++) {

			int tempSt = 0;
			int tempBa = 0;
			for (int j = 0; j < 3; j++) {
				if (playerNumber[i] == computerNumber[j] && i == j) 
					tempSt++;
				else if (playerNumber[i] == computerNumber[j])
					tempBa++;
			}


			if (tempSt != 0)
				strike++;
			else if (tempSt == 0 && tempBa > 0)
				ball++;
		}

		printf("\n\n");
		printf("최종전적 strike: %d, ball: %d\n\n", strike, ball);
		strike = 0;
		ball = 0;
	}

}