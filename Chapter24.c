
#include <stdio.h>


/*
p.522
���� 24 - 1
���� 1
*/


//int main(void) {
//
//	// ���� �ؽ�Ʈ ������ ���� ��Ʈ�� ����
//
//	FILE * fp = fopen("mystory.txt", "wt");
//
//	if (fp == NULL) {
//		puts("�Է½�Ʈ�� ���� ����");
//		return -1;
//	}
//
//	fputs("#�̸�: ���¿�\n", fp);
//	fputs("#�ֹ���ȣ: 941122-111111\n", fp);
//	fputs("#��ȭ��ȣ: 010-1234-5678\n", fp);
//
//	fclose(fp);
//
//	return 0;
//}

/*
 ���� 24 - 1
 ���� 2
*/

//int main(void) {
//
//	// ���� �ؽ�Ʈ ������ ���� ��Ʈ�� ����
//
//	FILE* fp = fopen("mystory.txt", "at");
//
//	if (fp == NULL) {
//		puts("�Է½�Ʈ�� ���� ����");
//		return -1;
//	}
//
//	fputs("#��ܸԴ� ����: ��¥��\n", fp);
//	fputs("#���: ����\n", fp);
//
//	fclose(fp);
//
//	return 0;
//}


/*
 ���� 24 - 1
 ���� 1
*/

//int main(void) {
//
//	// ���� �ؽ�Ʈ ������ ���� ��Ʈ�� ����
//
//	char str[30];
//	FILE* fp = fopen("mystory.txt", "rt");
//
//	if (fp == NULL) {
//		puts("���Ͽ��� ����");
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
 ���� 24 - 2
*/

int countFileSize(FILE* fp) {

	int fileSize = 0;
	long fpos = 0;

	if (fp == NULL) {
		puts("���Ͽ��� ���� \n");
		return fileSize;
	}
	
	fpos = ftell(fp);
	printf("���� ��ġ �������� ���� ��ġ: %ld \n", fpos);
	fseek(fp, 0, SEEK_END);
	fpos = ftell(fp);
	printf("������ ���� ��ġ �������� ���� ��ġ: %ld \n", fpos);
	fseek(fp, 0, SEEK_SET);


	fclose(fp);
	fileSize = (int)fpos;
	return fileSize;
}

int main(void) {

	// ���� �ؽ�Ʈ ������ ���� ��Ʈ�� ����
	int fileSize;
	FILE* fp = fopen("mystory.txt", "rt");

	fileSize = countFileSize(fp);

	printf("���� ������� %d �Դϴ� \n", fileSize);

	return 0;
}