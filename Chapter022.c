#include <stdio.h>


/*
p.458
���� 22 - 1
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
//	fputs("�̸� �Է�\n", stdout);
//	scanf_s("%s", emp.name);
//
//	fputs("�ֹι�ȣ �Է�\n", stdout);
//	scanf_s("%s", emp.personNumber);
//
//	fputs("�޿����� �Է�\n", stdout);
//	scanf_s("%d", &(emp.salay));
//
//
//	printf("�̸�    : %s \n", emp.name);
//	printf("�ֹι�ȣ: %s \n", emp.personNumber);
//	printf("�޿�����: %d \n", emp.salay);
//
//}


/*
p.463
���� 22 - 2
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
		printf("�̸�, �ֹι�ȣ, ������ �־��ּ���\n");
		scanf_s("%s", arr[i].name);
		scanf_s("%s", arr[i].personNumber);
		scanf_s("%d", &(arr[i].salary));
	}


	for (int i = 0; 3 > i; i++) {
		printf("�̸�: %s \n", arr[i].name);
		printf("�ֹι�ȣ: %s \n", arr[i].personNumber);
		printf("����: %d\n\n", arr[i].salary);
	}

	return 0;
}