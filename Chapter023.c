#include <stdio.h>

/*
p.484

문제 23 - 1
*/

//typedef struct {
//	int xPos;
//	int yPos;
//} Point;
//
//
//void SwapPoint(Point *pos1, Point *pos2) {
//
//	Point tempPos = *pos1;
//	*pos1 = *pos2;
//	*pos2 = tempPos;
//}
//
//
//int main(){
//	
//	Point pos1 = { 2, 4 };
//	Point pos2 = { 5, 7 };
//
//	printf("점1 [%d, %d]\n", pos1.xPos, pos1.yPos);
//	printf("점2 [%d, %d]\n", pos2.xPos, pos2.yPos);
//
//	SwapPoint(&pos1, &pos2);
//
//	printf("점1 [%d, %d]\n", pos1.xPos, pos1.yPos);
//	printf("점2 [%d, %d]\n", pos2.xPos, pos2.yPos);
//
//	return 0;
//}


/*
p.488

문제 23 - 2
*/

typedef struct {
	int xPos;
	int yPos;
} Point;

typedef struct {
	Point topLeft;
	Point bottomRight;
} Rectangle;



void calRectangleArea(Rectangle rect) {

	int width = rect.bottomRight.xPos - rect.topLeft.xPos;
	int height = rect.bottomRight.yPos - rect.topLeft.yPos;

	int area = width * height;
	printf("area: %d \n", area);

}

void printPoint(Rectangle rect) {
	printf("좌상단 [%d, %d]\n", rect.topLeft.xPos, rect.topLeft.yPos);
	printf("좌하단 [%d, %d]\n", rect.topLeft.xPos, rect.bottomRight.yPos);
	printf("우상단 [%d, %d]\n", rect.bottomRight.xPos, rect.topLeft.yPos);
	printf("우하단 [%d, %d]\n", rect.bottomRight.xPos, rect.bottomRight.yPos);
}

int main() {

	Rectangle rec1 = { {0, 0}, {100 , 100 } };

	calRectangleArea(rec1);
	printPoint(rec1);

	return 0;
}