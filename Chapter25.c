#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
p.541
���� 25 - 1
���� 1
*/
//void func2(int n) {
//	int num3 = n + 1;
//}
//
//void func1(int n) {
//	int num2 = n + 1;
//	func(num2);
//}
//
//int main(void) {
//	int num1 = 20;
//	func1(num1);
//	return 0;
//}

/*
���ʿ� main �Լ��� ����
���� ������ num1 �߰�

���� ������ func1�� �Ű�����n �߰�
���� ������ func1�� �������� num2 �߰�

���� ������ func2�� �Ű����� n �߰�
���� ������ func2�� �������� num3 �߰�

func2 �Լ��� ����Ǹ鼭 func2�� �������� num3, �Ű����� n ���ÿ������� ����
func1 �Լ��� ����Ǹ鼭 func1�� �������� num2, �Ű����� n ���ÿ������� ����

main �Լ��� ����Ǹ鼭 num1 ���ÿ������� ���� 

*/



/*
p.551
���� 25 - 2

���� 1

���ڿ��� �ִ� ���̸� �Է¹ް�
���ڿ��� �Է��� �ް� ���ڿ��� �ܾ �������� ����϶�
*/

//void printText(char * str, int startNum, int endNum) {
//	//printf("printText startNum: %d, endNum: % d\n", startNum, endNum);
//
//	for (int i = startNum; i <= endNum; i++) {
//		printf("%c", str[i]);
//	}
//	printf(" ");
//	//printf("\n");
//}
//
//int main(void) {
//
//	int strlen;
//
//	// ���ڿ��� �ִ���̸� �Է¹ޱ�
//	//printf("�Է��� ���ڿ��� �ִ���̸� �Է����ּ���.\n");
//	//scanf_s("%d", &strlen);
//
//	strlen = 11;
//	char* str = (char*)calloc(sizeof(char) * (strlen + 1));
//	if (str == NULL) {
//		printf("�޸� �Ҵ� ����\n");
//		return -1;
//	}
//
//	// ���ڿ��� ���̸�ŭ �����Ҵ�
//	printf("���ڿ��� �Է����ּ���. \n");	
//	
//	if (fgets(str, strlen + 1, stdin) == NULL) {
//		printf("�Է� ���� �߻�\n");
//		return -1;
//	}
//
//	str[strcspn(str, "\n")] = '\0';
//	printf("%s \n", str);
//
//	// ������ ���� ������ �������� ������ ������ ���̸� ����� ���
//	//int startPoint = strlen;
//	int endtPoint = strlen - 1;
//	//printf("%d \n", endtPoint);
//
//	//for (int i = 0; i < strlen; i++) {
//	//	printf("%c\n", str[i]);
//	//}
//
//	printf("\n");
//
//	for (int i = strlen; i >= 0; i--) {
//		//printf("%c\n", str[i]);
//
//		if (str[i] == ' ') {
//			//printf("����");
//			printText(str, i + 1, endtPoint);
//			endtPoint = i - 1 != 0 ? i - 1 : 0;
//		}
//		else if (i == 0) {
//			printText(str, i, endtPoint);
//
//		}
//
//	}
//
//	// �� �޸� ����
//	free(str);
//
//	return 0;
//}

/*
���� 
*/

//int main(void) {
//	int maxlen, len, i;
//	char* str;
//	printf("���ڿ��� �ִ� ���� �Է�: ");
//	scanf_s("%d", &maxlen);
//	getchar();
//	str = (char*)malloc(sizeof(char) * (maxlen + 1));
//
//	printf("���ڿ� �Է�: ");
//	fgets(str, maxlen + 1, stdin);
//	str[strlen(str) - 1] = 0;
//	len = strlen(str);
//
//	for (i = len; i > 0; i--) {
//		if (str[i] == ' ') {
//			printf("%s ", &str[i + 1]);
//			str[i] = 0;
//		}
//	}
//
//	printf("%s", &str[0]);
//	free(str);
//
//	return 0;
//}







/*
���� 25 - 2

���� 2
*/



int main(void) {
	
	int maxlen = 5;

	// �ʱ� ���� ���� �Ҵ� int 5��
	int* arr = (int*)malloc(sizeof(int)* maxlen);
	if (arr == NULL) {
		printf("�޸� �Ҵ� ����\n");
		return -1;
	}
	
	int tempNum = 0;
	int index = 0;

	while (tempNum != -1) {
		printf("������ �Է����ּ���\n");
		scanf_s("%d", &tempNum);
		arr[index] = tempNum;

		index++;
		printf("�����ִ� ����: %d \n", maxlen - index);

		// �󸶳� ���ҳ�?
		if (index == maxlen) {
			maxlen += 3;
			int * tempArr = realloc(arr, sizeof(int)* maxlen);
			if (tempArr != NULL)
				arr = tempArr;

			printf("����+3 \n");
		}

		printf("\n");
	}

	printf("\n");
	for (int i = 0; i < index; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);

	return 0;
}