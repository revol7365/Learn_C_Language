#include <stdio.h>

/*
P.118
���� 05 - 01

���� 1
*/


//int main(void) {
//
//	int point1x, point1y;
//	int point2x, point2y;
//	int width, height;
//	  
//	printf("ù��° ���� ��ǥ�� �Է����ּ���.\n");
//	scanf_s("%d %d", &point1x, &point1y);
//
//	printf("ù��° ���� ��ǥ x: %d y:%d.\n", point1x, point1y);
//
//	printf("�ι�° ���� ��ǥ�� �Է����ּ���.\n");
//	scanf_s("%d %d", &point2x, &point2y);
//
//	printf("�ι�° ���� ��ǥ x: %d y:%d.\n", point2x, point2y);
//
//	width = point2x = point1x;
//	height = point2y = point1y;
//
//	printf("�簢���� ����: %d\n", width*height);
//
//
//	return 0;
//}


/*
���� 2
*/

//int main(void) {
//
//	double num1, num2;
//
//	printf("�ΰ��� �Ǽ��� �Է����ּ���.\n");
//	scanf_s("%lf %lf", &num1, &num2);
//
//	printf("%f + %f = %f \n", num1, num2, num1 +  num2);
//	printf("%f - %f = %f \n", num1, num2, num1 -  num2);
//	printf("%f * %f = %f \n", num1, num2, num1 *  num2);
//	printf("%f / %f = %f \n", num1, num2, num1 /  num2);
//
//
//	return 0;
//}



/*
���� 3

1. 0 ~ 127
2. 1�� �����Ѵ�
3. A�� 65 a�� 97 32���� �� ������ ��� �����ϴ�

*/


/*
���� 4
*/

//int main(void) {
//
//	int num1;
//
//	printf("�Ѱ��� �ƽ�Ű�ڵ尪�� ��Ī�Ǵ� ������ �Է����ּ���.\n");
//	scanf_s("%d", &num1);
//
//	printf("������: %d \n�ƽ�Ű�ڵ尪: %c", num1, num1);
//
//	return 0;
//}


/*
���� 5
*/

int main(void) {

	char char1;

	printf("�Ѱ��� ���ĺ����ڸ� �Է����ּ���.\n");
	scanf_s("%c", &char1);

	printf("������: %d \n�ƽ�Ű�ڵ尪: %c", char1, char1);

	return 0;
}