#include <stdio.h>
#include <stdlib.h>

void displaySquaresCubes() {
	printf("NUMBER      SQUARE      CUBE\n");
	printf("======      ======      ====\n");
	
	for (int i = 1; i < 11; i++) {
		printf("%6d      %6d      %4d\n", i, i*i, i*i*i);
	}
}

int main() {
	displaySquaresCubes();
	system("pause");
}