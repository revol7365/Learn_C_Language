#include <stdio.h>

/*
P.74
���� 03-01
*/

// 01��
//int main(void) {
//
//	int num1, num2;
//
//	printf("���� �Է� : ");
//	// scanf�Լ��� ����ؼ� scanf_S �Լ��� �����ؼ� ����϶�� ��
//	scanf_s("%d %d", &num1, &num2);
//
//	printf("%d - %d = %d \n", num1, num2, num1-num2);
//	printf("%d * %d = %d \n", num1, num2, num1*num2);
//
//	return 0;
//}


// 02��
//int main(void) {
//
//	int num1, num2, num3;
//
//	printf("���� ���� �Է� : ");
//	// scanf�Լ��� ����ؼ� scanf_S �Լ��� �����ؼ� ����϶�� ��
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	printf("%d * %d + %d= %d \n", num1, num2, num3, num1 * num2 + num3);
//
//	return 0;
//}


// 03��
//int main(void) {
//
//	int num1;
//
//	printf("���� �Է� : ");
//	// scanf�Լ��� ����ؼ� scanf_S �Լ��� �����ؼ� ����϶�� ��
//	scanf_s("%d", &num1);
//
//	printf("%d * %d= %d \n", num1, num1, num1 * num1);
//
//	return 0;
//}

// 04��
//int main(void) {
//
//	int num1, num2;
//
//	printf("���� 2�� �Է� : ");
//	// scanf�Լ��� ����ؼ� scanf_S �Լ��� �����ؼ� ����϶�� ��
//	scanf_s("%d %d", &num1, &num2);
//
//	printf("��    : %d \n", num1 / num2);
//	printf("������: %d \n", num1 % num2);
//
//	return 0;
//}


// 05��
int main(void) {

	int num1, num2, num3;

	printf("���� 3�� �Է� : ");
	// scanf�Լ��� ����ؼ� scanf_S �Լ��� �����ؼ� ����϶�� ��
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("���: %d \n", result);
	printf("(%d - %d) * (%d + %d) * (%d  %d) = %d \n", num1, num2, num2, num3, num3, num1, ((num1-num2) * (num2+num3) * (num3%num1)));

	return 0;
}