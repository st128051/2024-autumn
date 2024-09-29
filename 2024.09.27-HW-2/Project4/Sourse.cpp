#include <iostream>

int main(int argc, char* argv[]) {
	int x1 = 0;
	int y1 = 0;
	int z1 = 0;
	int x2 = 0;
	int y2 = 0;
	int z2 = 0;

	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &z1);
	scanf_s("%d", &x2);
	scanf_s("%d", &y2);
	scanf_s("%d", &z2);

	if ((x1 == x2 && y1 == y2 && z1 == z2) || (x1 == x2 && y1 == z2 && z1 == y2) || (x1 == y2 && y1 == x2 && z1 == z2) || (x1 == y2 && y1 == z2 && z1 == x2) || (x1 == z2 && y1 == x2 && z1 == y2) || (x1 == z2 && y1 == y2 && z1 == x2)) {
		printf("Boxes are equal");
	}
	else if ((x1 <= x2 && y1 <= y2 && z1 <= z2) || (x1 <= x2 && y1 <= z2 && z1 <= y2) || (x1 <= y2 && y1 <= x2 && z1 <= z2) || (x1 <= y2 && y1 <= z2 && z1 <= x2) || (x1 <= z2 && y1 <= x2 && z1 <= y2) || (x1 <= z2 && y1 <= y2 && z1 <= x2)) {
		printf("The first box is smaller than the second one");
	}
	else if ((x1 >= x2 && y1 >= y2 && z1 >= z2) || (x1 >= x2 && y1 >= z2 && z1 >= y2) || (x1 >= y2 && y1 >= x2 && z1 >= z2) || (x1 >= y2 && y1 >= z2 && z1 >= x2) || (x1 >= z2 && y1 >= x2 && z1 >= y2) || (x1 >= z2 && y1 >= y2 && z1 >= x2)) {
		printf("The first box is larger than the second one");
	}
	else {
		printf("Boxes are incomparable");
	}


	return EXIT_SUCCESS;
}