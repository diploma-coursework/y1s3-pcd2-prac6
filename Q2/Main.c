#include <stdio.h>

void doTriangleArea() {
	int a, b;
	printf("Enter length of a: ");
	scanf(" %d", &a);
	printf("Enter length of b: ");
	scanf(" %d", &b);
	
	double area = 0.5 * a * b;
	printf("Area of the right angle triangle is %.2f.\n", area);
}

int main() {
	doTriangleArea();
}