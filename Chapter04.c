#include <stdio.h>

/*
P.82
문제 04 - 01

문제 1

2진수
1000
1001
1010
1011
1100
1101
1110
1111
10000
10001
10010
10011
10100

16진수
8
9
A
B
C
D
E
F
10
11
12
13
14

문제 2

5
6
7
10
11
12
13
14
15
16
17
20
21
22

* /

/*

문제 04 - 02
P.83

문제 1


4비트가 표시할 수 있는 데이터는 2의 4승 16이다

1 바이트 = 8비트, 8비트가 표시할 수 있는 데이터는 2의 8승 256이다

4바이트 = 32비트, 32비트가 표시할 수 있는 데이터는 2의 32승 4,294,967,296이다


문제 2

1
2
4
8
16
32
64
128

문제 3

17
128+32+2=162
128+64+32+16+4+2+1=247

*/

/*
문제 04 - 03
P.89

문제 1
양의 정수 01001111
64+8+4+2+1 = 79

양의 정수 00110011
32+16+2+1= 51


문제 2
음의 정수 10101001
01010110
11010111
= 64+16+4+2+1=-87 

음의 정수 11110000
00001111
00010000
-16



*/


/*
문제 04 - 04
P.100
*/
//int main(void) {
//
//	int num1;
//	printf("숫자 한개 입력\n");
//	scanf_s("%d", &num1);
//
//	printf("부호변환: %d\n\n", ~num1+1);
//
//	return 0;
//}

/*
문제 04 - 05
*/
int main(void) {

	int num1 = 3;

	printf("%d * 8 = %d\n", num1, num1<<3);
	printf("%d * 8 / 4 = %d\n", num1,(num1 << 3)>>2);



	return 0;
}