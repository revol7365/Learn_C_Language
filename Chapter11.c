#include <stdio.h>

/*
p.260

���� 11-1
���� 1
*/

//int main() {
//	
//	int arr[5];
//	int maxNum;
//	int minNum;
//	int totalNum;
//
//	for (int i = 0; i < 5; i++) {
//		printf("������ �Է����ּ���.\n");
//		scanf_s("%d", &arr[i]);
//	}
//
//	maxNum = arr[0];
//	minNum = arr[0];
//	totalNum = arr[0];
//
//	for (int i = 0; i < 5; i++) {
//		totalNum += arr[i];
//		maxNum = arr[i] > maxNum ? arr[i] : maxNum;
//		minNum = arr[i] < minNum ? arr[i] : minNum;
//	}
//
//	printf("�ִ밪: %d\n", maxNum);
//	printf("�ּҰ�: %d\n", minNum);
//	printf("����: %d\n", totalNum);
//	return 0;
//}

/*
���� 2
*/
//int main() {
//
//	char charArr[] = "Good time";
//
//	for (int i = 0; i < sizeof(charArr)/sizeof(char) ; i++) {
//		printf("%c", charArr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


/*
p.268

���� 11-2
���� 1
*/

//int main() {
//	char arr[100];
//	int idx = 0;
//
//	printf("���ܾ �Է����ּ���\n");
//	scanf_s("%s", arr);
//
//	while (arr[idx] != 0)
//	{
//		idx++;
//	}
//	printf("�Էµ� ���ܾ��� ���̴� %d", idx);
//
//}

/*
���� 2
*/
int main() {
	char arr[100];
	char resultArr[100];
	int idx = 0;
	int resultIdx = 0;

	printf("���ܾ �Է����ּ���\n");
	scanf_s("%s", arr);

	while (arr[idx] != 0)
	{
		idx++;
	}

	idx--;

	for (; idx >= 0; idx--) {
		printf("\n");

		resultArr[resultIdx] = arr[idx];
		printf("resultArr[resultIdx]: %c\n", resultArr[resultIdx]);
		printf("arr[idx]: %c\n", arr[idx]);

		printf("resultIdx: %d\n", resultIdx);
		printf("idx: %d\n", idx);

		resultIdx++;
	}

	printf("���ܾ� ����: %s\n", resultArr);

}

/*
���� 3
*/
//int main() {
//	char arr[100];
//	int idx = 0;
//	int maxChar;
//
//	printf("���ܾ �Է����ּ���\n");
//	scanf_s("%s", arr);
//
//	maxChar = arr[0];
//
//	while (arr[idx] != 0)
//	{
//		printf("���� %d\n", arr[idx]);
//
//		maxChar = arr[idx] > maxChar ? arr[idx] : maxChar;
//
//		printf("maxChar�� %d\n", maxChar);
//
//		idx++;
//	}
//
//	printf("���� ū �ƽ�Ű�ڵ�� %d\n", maxChar);
//	printf("���� ū �ƽ�Ű�ڵ�� %c\n", maxChar);
//
//}