#include <stdio.h>

/*
P.189
���� 08 - 01

���� 1
*/

//int main(void) {
//
//	int i = 1;
//
//	for (;i < 100; i++) {
//		if (i%7 == 0 || i%9 == 0) {
//			printf("7�� ����̰ų� 9�� ��� %d\n", i);
//		}
//	}
//	return 0;
//}


/*
����2
*/
//int main(void) {
//
//	int num1, num2;
//	int result = 0;
//
//	printf("�ΰ��� ���� �Է�\n");
//	scanf_s("%d %d", &num1, &num2);
//
//	result = num1 - num2;
//
//	if (result >=0) {
//		printf("���: %d", result);
//	}
//	else {
//		printf("���: %d", result*-1);
//	}
//
//	return 0;
//}

/*
����3
*/
//int main(void) {
//
//	int num1, num2, num3;
//	int result = 0;
//
//	printf("������ ���� �Է�\n");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	result = (num1 + num2 + num3) / 3;
//
//	if (result >= 90) {
//		printf("���� A");
//	}
//	else if (result >= 80) 
//	{
//		printf("���� B");
//	} 
//	else if (result >= 70) 
//	{
//		printf("���� C");
//	}
//	else if (result >= 50)
//	{
//		printf("���� D");
//	}
//	else {
//		printf("���� ����");
//	}
//
//	return 0;
//}


/*
����4
*/
//int main(void) {
//
//	int num1, num2;
//	int result = 0;
//	
//	printf("�ΰ��� ���� �Է�\n");
//	scanf_s("%d %d", &num1, &num2);
//	
//	result = num1 - num2;
//
//	printf("���: %d", result >= 0 ? result : result*-1);
//
//	return 0;
//}


/*
P.193
���� 08 - 02

���� 1
*/

//int main(void) {
//
//	int dan = 2;
//	int is = 1;
//
//	for (; dan <= 8; dan++) {
//
//		if (dan%2 != 0)
//			continue;
//
//		is = 1;
//		for (; is <= 8; is++) {
//			printf("%d * %d = %d\n", dan, is, dan * is);
//			if (dan == is) {
//				printf("\n");
//				break;
//			}
//		}
//
//	}
//
//	return 0;
//}
 


/*
���� 2
*/

//int main(void) {
//
//	int a = 0, z = 0;
//
//	for (; a < 10; a++) {
//
//		for (; z < 10; z++) {
//
//			if (99 == (a * 10) + (z * 10)+a+z) {
//				printf("a: %d z: %d\n", a, z);
//			}
//			
//		}
//
//	}
//
//	return 0;
//}


/*
P.200
���� 08 - 03

���� 1
*/

int main(void) {

	int num;

	printf("���� �ϳ� �Է�\n");
	scanf_s("%d", &num);

	switch (num/10)
	{
	case 0:
		printf("0�̻� 10�̸�");
		break;
	case 1:
		printf("10�̻� 20�̸�");
		break;
	case 2:
		printf("20�̻� 30�̸�");
		break;
	case 3:
		printf("30�̻� 40�̸�");
		break;
	case 4:
		printf("40�̻� 50�̸�");
		break;

	default:
		break;
	}

	return 0;
}