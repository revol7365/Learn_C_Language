#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
p.541
문제 25 - 1
문제 1
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
최초에 main 함수가 실행
스택 영역에 num1 추가

스택 영역에 func1의 매개변수n 추가
스택 영역에 func1의 지역변수 num2 추가

스택 영역에 func2의 매개변수 n 추가
스택 영역에 func2의 지역변수 num3 추가

func2 함수가 종료되면서 func2의 지역변수 num3, 매개변수 n 스택영역에서 삭제
func1 함수가 종료되면서 func1의 지역변수 num2, 매개변수 n 스택영역에서 삭제

main 함수가 종료되면서 num1 스택영역에서 삭제 

*/



/*
p.551
문제 25 - 2

문제 1

문자열의 최대 길이를 입력받고
문자열을 입력을 받고 문자열의 단어를 역순으로 출력하라
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
//	// 문자열의 최대길이를 입력받기
//	//printf("입력할 문자열의 최대길이를 입력해주세요.\n");
//	//scanf_s("%d", &strlen);
//
//	strlen = 11;
//	char* str = (char*)calloc(sizeof(char) * (strlen + 1));
//	if (str == NULL) {
//		printf("메모리 할당 실패\n");
//		return -1;
//	}
//
//	// 문자열의 길이만큼 동적할당
//	printf("문자열을 입력해주세요. \n");	
//	
//	if (fgets(str, strlen + 1, stdin) == NULL) {
//		printf("입력 오류 발생\n");
//		return -1;
//	}
//
//	str[strcspn(str, "\n")] = '\0';
//	printf("%s \n", str);
//
//	// 공백이 나올 때까지 역순으로 돌리고 나오면 길이를 계산해 출력
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
//			//printf("공백");
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
//	// 힙 메모리 해제
//	free(str);
//
//	return 0;
//}

/*
정답 
*/

//int main(void) {
//	int maxlen, len, i;
//	char* str;
//	printf("문자열의 최대 길이 입력: ");
//	scanf_s("%d", &maxlen);
//	getchar();
//	str = (char*)malloc(sizeof(char) * (maxlen + 1));
//
//	printf("문자열 입력: ");
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
문제 25 - 2

문제 2
*/



int main(void) {
	
	int maxlen = 5;

	// 초기 정수 변수 할당 int 5개
	int* arr = (int*)malloc(sizeof(int)* maxlen);
	if (arr == NULL) {
		printf("메모리 할당 실패\n");
		return -1;
	}
	
	int tempNum = 0;
	int index = 0;

	while (tempNum != -1) {
		printf("정수를 입력해주세요\n");
		scanf_s("%d", &tempNum);
		arr[index] = tempNum;

		index++;
		printf("남아있는 공간: %d \n", maxlen - index);

		// 얼마나 남았나?
		if (index == maxlen) {
			maxlen += 3;
			int * tempArr = realloc(arr, sizeof(int)* maxlen);
			if (tempArr != NULL)
				arr = tempArr;

			printf("공간+3 \n");
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