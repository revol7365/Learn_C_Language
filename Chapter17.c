#include <stdio.h>


/*
p.368
���� 17 - 1
*/

// �迭�� ���� ū �ּ� ���� ���� �ּҰ��� �� �־�� �ȴ�
void MaxAndMin(int ** maxPtr, int ** minptr, int * arr) {
	printf("\n");

	printf("min: %d\n", minptr);
	printf("max: %d\n",maxPtr);

	printf("\n");


	for (int index = 0; index < 5; index++) {
		printf("======================================================================\n");

		printf("�迭 index:%d, ���� %d, �ּҰ��� %d \n", index, arr[index], arr + index);

		if (index == 0) {
			*maxPtr = arr + index;
			*minptr = arr + index;
			continue;
		}

		printf("\n");
		printf("min %d %d \n", **minptr, *minptr);
		printf("max %d %d \n", **maxPtr, *maxPtr);
		printf("min %d \n", **minptr < arr[index] ? *minptr : arr + index);
		printf("max %d \n", **maxPtr > arr[index] ? *maxPtr : arr + index);

		*minptr = **minptr < arr[index] ? *minptr : arr + index;
		*maxPtr = **maxPtr > arr[index] ? *maxPtr : arr + index;

		printf("min %d %x \n", *minptr, minptr);
		printf("max %d %x \n", *maxPtr, maxPtr);
		
		printf("\n");
		printf("\n");
	
	}

	printf("min %d %d \n", **minptr, *minptr);
	printf("max %d %d \n", **maxPtr, *maxPtr);
}


int main(void) {

	int* maxPtr;
	int* minptr;
	int arr[5] = { 10, 20, 50, -50, 100 };

	MaxAndMin(&maxPtr, &minptr, arr);

	printf("\n");
	printf("\n");

	//printf("min %d %x \n", *minptr, minptr);
	//printf("max %d %x \n", *maxPtr, maxPtr);


}