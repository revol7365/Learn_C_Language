#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
p.  406
���� ���α׷��� 3

���� 1
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
//	// ȸ�� �� ������
//	//  x = y, y = max - x�� �ȴ�
//
//	printf("�Ű������� ���� 2���� �迭�� �ּҰ�: %d\n", aptr);
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
//	printf("2���� �迭�� �ּҰ�: %d\n", &arr);
//
//	RotationArray(&arr);
//
//	printf("2���� �迭�� �ּҰ�: %d\n", &arr);
//
//	RotationArray(&arr);
//
//}

/*
���� 2
*/

//void InputArr(int num) {
//	printf("InputArr ==== \n");
//
//	for (int i = 1; num * num > i; i++) {
//		printf("�Է°�: %d \n", i);
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
//	printf("���� �Ѱ��� �Է����ּ���. \n");
//	scanf_s("%d", &num);
//	printf("%d x %d �迭\n", num, num);
//	InputArr(num);
//}


/*
���� 3
*/

//int main(void) 
//{
//	int i;
//	
//	printf("������ ����: 0���� %d���� \n", RAND_MAX);
//	
//	for (i = 0; i < 5; i++)
//		printf("���� ���: %d \n", rand()%100);
//	
//	return 0;
//}


/*
���� 4
*/

//int main(void)
//{
//	int i;
//
//	srand((int)time(NULL));
//	for (i = 1; i < 3; i++) {
//		printf("�ֻ��� %d�� ��� %d \n", i, rand() % 6 + 1);
//	}
//
//	return 0;
//}

/*
���� 5
*/

//void printKind(char *str, int num) {
//	switch (num)
//	{
//	case 1:
//		printf("%s�� ������ ���̽��ϴ�.\n", str);
//		break;
//	case 2:
//		printf("%s�� ������ ���̽��ϴ�.\n", str);
//		break;
//	case 3:
//		printf("%s�� ���� ���̽��ϴ�.\n", str);
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
//		printf("����: 1, ����: 2, ��: 3 \n ���߿� �ϳ��� �Է����ּ���\n");
//		scanf_s("%d", &userNum);
//
//		printKind("����", userNum);
//
//		srand((int)time(NULL));
//		computer = rand() % 3 + 1;
//
//		printKind("��ǻ��", computer);
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
//		printf("����  %d�� %d�� %d��\n\n", win, draw, loss);
//
//	}
//
//}


/*
���� 6
*/


int main(void)
{
	int playerNumber[3];
	int computerNumber[3];

	srand((int)time(NULL));

	// ��ǻ�� ���� ���� ����
	for (int i = 0; i < 3; i++) {
		computerNumber[i] = rand() % 10;
	}

	// ��ǻ�� ���� ����
	for (int i = 0; i < 3; i++) {
		printf("%d \n", computerNumber[i]);
	}

	printf("\n");

	int strike = 0;
	int ball = 0;

	while (strike < 3) {

		// ���� ���� ����
		for (int i = 0; i < 3; i++) {
			printf("0~9���� ���ڸ� �Է����ּ���\n");
			scanf_s("%d", &playerNumber[i]);
		}

		printf("\n\n ���� ���� \n");

		// ���� ���� ����
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
		printf("�������� strike: %d, ball: %d\n\n", strike, ball);
		strike = 0;
		ball = 0;
	}

}