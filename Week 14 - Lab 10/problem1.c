#include <stdio.h>
#include <string.h>

struct Flight {
    int flight_number;
    char departure_city[50];
    char destination_city[50];
    char date[20];
    int available_seats;
};

void displayFlight(struct Flight f) {
    printf("\n--- Flight Details ---\n");
    printf("Flight Number    : %d\n", f.flight_number);
    printf("Departure City   : %s\n", f.departure_city);
    printf("Destination City : %s\n", f.destination_city);
    printf("Date             : %s\n", f.date);
    printf("Available Seats  : %d\n", f.available_seats);
}

void bookSeat(struct Flight *f) {
    if (f->available_seats > 0) {
        f->available_seats--;
        printf("\nSeat successfully booked! Remaining seats: %d\n", f->available_seats);
    } else {
        printf("\nSorry, no available seats left on this flight.\n");
    }
}

int main() {
    struct Flight flight1 = {101, "New York", "London", "2026-12-15", 5};

    int choice;
    do {
        printf("\n--- Flight Management System ---\n");
        printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayFlight(flight1);
                break;
            case 2:
                bookSeat(&flight1);
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}