#include <stdio.h>
#include <stdlib.h>

/*
p.423

���� 21 - 1
*/

//int main(void) {
//
//	int input = 0;
//
//	input = getchar();
//
//	printf("%d\n", input);
//
//	if (65 <= input && input <= 90) {
//		putchar(input +32);
//	}
//	else if (97 <= input && input <= 122) {
//		putchar(input -32);
//	}
//	else {
//		printf("���ĺ��� �ƴմϴ�\n");
//	}
//
//	return 0;
//}

/*
p.445

���� 21 - 2 ing
*/


int main(void)
{
	char str[20];
	int sum = 0;
	
	for (int i = 0; i < 20; i++) 
	{
		fgets(str, sizeof(1), stdin);
		printf("\nRead %d: %s", i + 1, str);
		if ('0' < str && str < '9') {
			sum += atoi(str);
		}
		printf("\n�� ���: %d\n", sum);
	}

	printf("�� ���: %d\n", sum);



}