#include <stdio.h>

/*
p.284
���� 12 - 1
���� 1
*/

//int main() {
//	int num = 10; // ���� 10 �Ҵ�
//	int* ptr1 = &num; // ���� num�� �޸� �ּ� ����
//	int* ptr2 = ptr1; // ���� num�� �޸� �ּ� ����
//
//	// ptr1�� ptr2�� ���� ��
//
//	(*ptr1)++; // ���� num�� �÷���
//	(*ptr2)++; // ���� num�� �÷���
//	printf("%d\n", num); // ���� 12
//	return 0;
//}

/*
���� 1
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