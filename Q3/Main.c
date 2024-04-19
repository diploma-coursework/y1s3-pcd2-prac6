#include <stdio.h>

void welcome() {
	printf(
		"WELCOME!                        * *\n"
		"This program will calculate   *     *\n"
		"a circle's diameter,          *     *\n"
		"circumference and area          * *\n\n"
	);
}

void displayCircleInfo() {
	double const PI = 3.14159;
	int radius;
	printf("Enter radius of a circle: ");
	scanf("%d", &radius);
	
	double area = PI * radius * radius;
	double circumference = 2 * PI * radius;
	int diameter = 2 * radius;

	printf("Area: %.2f\n", area);
	printf("Circumference: %.2f\n", circumference);
	printf("Diameter: %d\n", diameter);
}

int main() {
	welcome();
	displayCircleInfo();
}