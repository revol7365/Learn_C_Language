#include <stdio.h>


/*
p.576
���� 26 - 1
���� 1
*/

//#define ADD(x, y, z) ((x)+(y)+(z))
//#define MULTIPLE(x, y, z) ((x)*(y)*(z))
//
//int main(void) {
//
//	int num1;
//	int num2;
//	int num3;
//
//	printf("���� ������ �Է����ּ���\n");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	printf("���� ���ϱ�: %d\n", ADD(num1, num2, num3));
//	printf("���� ���ϱ�: %d\n", MULTIPLE(num1, num2, num3));
//
//
//	return 0;
//}

/*
���� 2
*/

//#define PI 3.14
//#define CIRCLEAREA(r) ((PI)*(r)*(r))
//
//int main(void) {
//
//	double num;
//
//	printf("���� �������� �Է����ּ���\n");
//	scanf_s("%lf", &num);
//
//	printf("���� ����: %lf\n", CIRCLEAREA(num));
//
//	return 0;
//}


/*
���� 2
*/

#define MOREBIG(a, b) ((a) > (b) ? (a) : (b))

int main(void) {

	int num1;
	int num2;

	printf("���� �ΰ��� �Է����ּ���\n");
	scanf_s("%d %d", &num1, &num2);

	printf("ū��: %d\n", MOREBIG(num1, num2));

	return 0;
}