#include <stdio.h>


/*
p.458
문제 22 - 1
*/
//struct employee
//{
//	char name[20];
//	char personNumber[20];
//	int salay;
//
//};
//
//int main() {
//
//	struct employee emp;
//
//	fputs("이름 입력\n", stdout);
//	scanf_s("%s", emp.name);
//
//	fputs("주민번호 입력\n", stdout);
//	scanf_s("%s", emp.personNumber);
//
//	fputs("급여정보 입력\n", stdout);
//	scanf_s("%d", &(emp.salay));
//
//
//	printf("이름    : %s \n", emp.name);
//	printf("주민번호: %s \n", emp.personNumber);
//	printf("급여정보: %d \n", emp.salay);
//
//}


/*
p.463
문제 22 - 2
*/

struct employee
{
	char name[20];
	char personNumber[20];
	int salary;

};

int main() {
	struct employee arr[3];

	for (int i = 0; 3 > i; i++) {
		printf("이름, 주민번호, 연봉을 넣어주세요\n");
		scanf_s("%s", arr[i].name);
		scanf_s("%s", arr[i].personNumber);
		scanf_s("%d", &(arr[i].salary));
	}


	for (int i = 0; 3 > i; i++) {
		printf("이름: %s \n", arr[i].name);
		printf("주민번호: %s \n", arr[i].personNumber);
		printf("연봉: %d\n\n", arr[i].salary);
	}

	return 0;
}