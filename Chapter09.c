#include <stdio.h>

/*
P.221
���� 09 - 01

���� 1
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
//	printf("���� ���� �Է����ּ���.\n");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//
//	printf("���� ���� ������ %d\n", returnSmallNum(num1, num2, num3));
//	printf("���� ū ������   %d\n", returnBigNum(num1, num2, num3));
//
//	return 0;
//}

/*
���� 02
*/

//// ���� -> ȭ��
//double CelToFah(double cel) {
//	// Fah = 1.8*cel +32
//	double fah = (1.8 * cel) + 32;
//	return fah;
//}
//
//// ȭ�� -> ����
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
//	printf("ȭ���� ��ȯ�� ���� �µ��� �Է����ּ���\n");
//	scanf_s("%lf", &cel);
//
//
//	printf("������ ��ȯ�� ȭ�� �µ��� �Է����ּ���\n");
//	scanf_s("%lf", &fah);
//
//	printf("�Է¹��� ���� �µ�: %f -> ��ȯ�� ȭ�� �µ�: %f\n", cel, CelToFah(cel));
//
//	printf("�Է¹��� ȭ�� �µ�: %f -> ��ȯ�� ���� �µ�: %f\n", fah, FahToCel(fah));
//
//	return 0;
//}

/*
���� 03
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
//	printf("����� �Ǻ���ġ ���� ������ �Է����ּ���\n");
//	scanf_s("%d", &count);
//
//	printFibo(count);
//
//
//	return 0;
//}


/*
P.237
���� 09 - 02

���� 1
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
		printf("�Է�%d: ", i + 1);
		scanf_s("%d", &num);
		printf("���� %d \n", AddToTotal(num));
	}
	return 0;
}