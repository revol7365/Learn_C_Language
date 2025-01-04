
#include <stdio.h>


/*
p.522
문제 24 - 1
문제 1
*/


//int main(void) {
//
//	// 파일 텍스트 데이터 쓰기 스트림 형성
//
//	FILE * fp = fopen("mystory.txt", "wt");
//
//	if (fp == NULL) {
//		puts("입력스트림 생성 실패");
//		return -1;
//	}
//
//	fputs("#이름: 조승원\n", fp);
//	fputs("#주문번호: 941122-111111\n", fp);
//	fputs("#전화번호: 010-1234-5678\n", fp);
//
//	fclose(fp);
//
//	return 0;
//}

/*
 문제 24 - 1
 문제 2
*/

//int main(void) {
//
//	// 파일 텍스트 데이터 쓰기 스트림 형성
//
//	FILE* fp = fopen("mystory.txt", "at");
//
//	if (fp == NULL) {
//		puts("입력스트림 생성 실패");
//		return -1;
//	}
//
//	fputs("#즐겨먹는 음식: 탕짜면\n", fp);
//	fputs("#취미: 게임\n", fp);
//
//	fclose(fp);
//
//	return 0;
//}


/*
 문제 24 - 1
 문제 1
*/

//int main(void) {
//
//	// 파일 텍스트 데이터 쓰기 스트림 형성
//
//	char str[30];
//	FILE* fp = fopen("mystory.txt", "rt");
//
//	if (fp == NULL) {
//		puts("파일오픈 실패");
//		return -1;
//	}
//
//	while (fgets(str, sizeof(str), fp) != NULL) {
//		printf("%s", str);
//	}
//
//	fclose(fp);
//
//	return 0;
//}


/*
 문제 24 - 2
*/

int countFileSize(FILE* fp) {

	int fileSize = 0;
	long fpos = 0;

	if (fp == NULL) {
		puts("파일오픈 실패 \n");
		return fileSize;
	}
	
	fpos = ftell(fp);
	printf("파일 위치 지시자의 현재 위치: %ld \n", fpos);
	fseek(fp, 0, SEEK_END);
	fpos = ftell(fp);
	printf("마지막 파일 위치 지시자의 현재 위치: %ld \n", fpos);
	fseek(fp, 0, SEEK_SET);


	fclose(fp);
	fileSize = (int)fpos;
	return fileSize;
}

int main(void) {

	// 파일 텍스트 데이터 쓰기 스트림 형성
	int fileSize;
	FILE* fp = fopen("mystory.txt", "rt");

	fileSize = countFileSize(fp);

	printf("파일 사이즈는 %d 입니다 \n", fileSize);

	return 0;
}