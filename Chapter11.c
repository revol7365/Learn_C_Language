#include <stdio.h>

/*
p.260

문제 11-1
문제 1
*/

//int main() {
//	
//	int arr[5];
//	int maxNum;
//	int minNum;
//	int totalNum;
//
//	for (int i = 0; i < 5; i++) {
//		printf("정수를 입력해주세요.\n");
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
//	printf("최대값: %d\n", maxNum);
//	printf("최소값: %d\n", minNum);
//	printf("총합: %d\n", totalNum);
//	return 0;
//}

/*
문제 2
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

문제 11-2
문제 1
*/

//int main() {
//	char arr[100];
//	int idx = 0;
//
//	printf("영단어를 입력해주세요\n");
//	scanf_s("%s", arr);
//
//	while (arr[idx] != 0)
//	{
//		idx++;
//	}
//	printf("입력된 영단어의 길이는 %d", idx);
//
//}

/*
문제 2
*/
int main() {
	char arr[100];
	char resultArr[100];
	int idx = 0;
	int resultIdx = 0;

	printf("영단어를 입력해주세요\n");
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

	printf("영단어 역순: %s\n", resultArr);

}

/*
문제 3
*/
//int main() {
//	char arr[100];
//	int idx = 0;
//	int maxChar;
//
//	printf("영단어를 입력해주세요\n");
//	scanf_s("%s", arr);
//
//	maxChar = arr[0];
//
//	while (arr[idx] != 0)
//	{
//		printf("문자 %d\n", arr[idx]);
//
//		maxChar = arr[idx] > maxChar ? arr[idx] : maxChar;
//
//		printf("maxChar는 %d\n", maxChar);
//
//		idx++;
//	}
//
//	printf("가장 큰 아스키코드는 %d\n", maxChar);
//	printf("가장 큰 아스키코드는 %c\n", maxChar);
//
//}