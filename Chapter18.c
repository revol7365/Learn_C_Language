#include <stdio.h>

/*
p.387

巩力 18 - 1
*/


/*
巩力 1
*/
//int main(void) {
// 
//	int* arr1[5];
//	int* arr2[3][5];
//
//	int ** ptr1 = arr1;
//	int * (*ptr2)[5] = arr2;
//
//	return 0;
//}


/*
巩力 2
*/

//void SimpleFunOne(int *ar1, int* ar2) {}
//void SimpleFunTwo(int (*ar3)[4], int (*ar4)[4]) {}
//
//int main(void) {
//	
//	int arr1[3];
//	int arr2[4];
//	int arr3[3][4];
//	int arr4[2][4];
//
//	SimpleFunOne(arr1, arr2);
//	SimpleFunOne(arr3, arr3);
//
//
//	return 0;
//}


/*
巩力 3
*/

void ComplexFuncOne(int** ar1[], int* (*ar2)[5]) {}
void ComplexFuncTwo(int ***ar3, int ***(*ar4)[5]) {}

int main(void) {

	int*   arr1[3];
	int*   arr2[3][5];
	int**  arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr3);


	return 0;
}



/*
巩力 4

3 2
6 4
5 2
1 1
*/


/*
巩力 5
*/

//void ComplexFuncOne(int* ar1, int* ar2) {}
//void ComplexFuncTwo(int (*ar3)[4], int (*ar4)[4]) {}
//
//int main(void) {
//
//	int* arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
//	printf("%d \n", arr[1][0][1]);
//	printf("========================\n");
//
//	printf("%d \n", (*(arr + 1))[0][1]);
//	printf("%d \n", (*(*(arr + 1) + 0))[1]);
//
//	printf("%d \n", *(*(*(arr + 1) + 0) + 1));
//	printf("%d \n", *(*(arr + 1)[0] + 1));
//	printf("%d \n", *(arr[1][0]+1));
//	
//
//
//	return 0;
//}