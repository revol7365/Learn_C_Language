#include <stdio.h>

/*
P.155
���� 07 - 01

���� 1
*/

//int main(void) {
//
//	int num1;
//
//	printf("Hello World!�� ����Ʈ �� Ƚ���� �Է����ּ���\n");
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

���� 2

*/

//int main(void) {
//
//	int num1;
//	int num2 = 1;
//
//	printf("������ �Է����ּ���\n");
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

���� 3

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
//		printf("������ �Է����ּ���\n");
//		scanf_s("%d", &inputValue);
//
//		sumNum = sumNum + inputValue;
//		isStop = inputValue;
//		
//	}
//
//	printf("����: %d\n", sumNum);
//
//	return 0;
//}


/*

���� 4

*/

//int main(void) {
//
//	int dan = 0;
//	int num = 9;
//
//
//	printf("����� ����ұ��?\n");
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

���� 5

*/

//int main(void) {
//
//	int inputCount = 0;
//	int repeatCount = 0;
//	int totalValue = 0;
//
//
//	printf("� ���� �Է¹������?\n");
//	scanf_s("%d", &repeatCount);
//	inputCount = repeatCount;
//
//	while (repeatCount > 0)
//	{
//		int inputValue = 0;
//
//		printf("������ �Է����ּ���\n");
//		scanf_s("%d", &inputValue);
//
//		totalValue += inputValue;
//
//		repeatCount--;
//
//	}
//
//	printf("��հ�: %f", (double)totalValue/inputCount);
//
//
//	return 0;
//}

/*
P.157
���� 07 - 02

���� 1
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
//		printf("������ �Է����ּ���\n");
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
//	printf("����: %d", totalValue);
//
//	return 0;
//}

/*
���� 2
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
���� 07 - 03

���� 1
*/

//int main(void) {
//
//	//int total = 0, num = 0;
//
//	//do
//	//{
//	//	printf("���� �Է�(0 to quit): ");
//	//	scanf_s("%d", &num);
//	//	total += num;
//
//	//}while(num != 0);
//	//printf("�հ�: %d \n", total);
//
//
//	// ���� num�� ���� ������ �ʱ�ȭ�ؼ� ù��° �ݺ������� ���� �ǰ� �Ѵ�
//	//int total = 0, num = 1;
//
//	//while (num) {
//	//	printf("���� �Է�(0 to quit): ");
//	//	scanf_s("%d", &num);
//	//	total += num;
//	//}
//	//printf("�հ�: %d \n", total);
//
//
//	// �ݺ��� ������ �Է¹ޱ�
//
//
//	int total = 0, num = 0;
//	printf("���� �Է�(0 to quit): ");
//	scanf_s("%d", &num);
//	total += num;
//
//	while (num) {
//		printf("���� �Է�(0 to quit): ");
//		scanf_s("%d", &num);
//		total += num;
//	}
//	printf("�հ�: %d \n", total);
//
//	return 0;
//}

/*
���� 2
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
//	printf("�հ�: %d \n", total);
//
//	return 0;
//}

/*
���� 3
*/
//int main(void) {
//
//	// 2�ܺ��� 9�ܱ��� ���
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
���� 07 - 04

���� 1
*/

//int main(void) {
//
//	int smallNum = 0;
//	int largeNum = 0;
//	int repeatCount = 0;
//	int total = 0;
//
//	printf("�� ���� �Է�\n");
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
���� 2
*/

int main(void) {

	int num = 0;
	int repeatCount = 1;
	int total = 1;

	printf("���� �Ѱ� �Է�\n");
	scanf_s("%d", &num);

	for (; repeatCount < num + 1; repeatCount++) {
		total *= repeatCount;
	}
	printf("total: %d\n", total);

	return 0;
}