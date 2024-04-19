#include <stdio.h>
#include <stdlib.h>

void bookATicket() {
	system("cls");
	printf("book a ticket\n");
	system("pause");
}

void displaySeatLayout() {
	system("cls");
	printf("display seat layout\n");
	system("pause");
}

void displayCinemaMenu() {
	while (1) {
		printf("CINEMA Menu\n\n");
		printf("1. Book a Ticket\n");
		printf("2. Display Seat Layout\n");
		printf("3. Exit\n\n");
		printf("Choose an option: ");

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				bookATicket();
				break;
			case 2:
				displaySeatLayout();
				break;
			case 3:
				return;
			default:
				printf("Invalid option.\n");
				system("pause");

		}
		system("cls");
	}
}

int main() {
	displayCinemaMenu();
}