#include <stdio.h>
#include <string.h>

struct TravelPackage {
    char packageName[100];
    char destination[100];
    int duration; 
    double cost; 
    int seatsAvailable;
};
void displayPackages(struct TravelPackage packages[], int count) {
	int i;
    if (count == 0) {
        printf("\nNo packages available.\n");
        return;
    }
    printf("\nAvailable Travel Packages:\n");
    for (i = 0; i < count; i++) {
        printf("\nPackage Name: %s\nDestination: %s\nDuration: %d days\nCost: $%.2f\nSeats Available: %d\n",
               packages[i].packageName, packages[i].destination, packages[i].duration,
               packages[i].cost, packages[i].seatsAvailable);
    }
}
void bookPackage(struct TravelPackage *package) {
    if (package->seatsAvailable > 0) {
        package->seatsAvailable--;
        printf("Package booked successfully! Seats remaining: %d\n", package->seatsAvailable);
    } else {
        printf("No seats available for booking.\n");
    }
}
int main() {
    struct TravelPackage packages[] = {
        {"Package 1", "Maldives", 7, 1500.00, 10},
        {"Package 2", "Japan", 10, 2500.00, 5}
    };
    int packageCount = 2;
    int i;
    printf("Travel Package Booking System:\n");
    displayPackages(packages, packageCount);

    char packageName[100];
    printf("\nEnter the name of the package to book: ");
    scanf(" %[^\n]", packageName);

    for ( i= 0; i < packageCount; i++) {
        if (strcmp(packages[i].packageName, packageName) == 0) {
            bookPackage(&packages[i]);
            displayPackages(packages, packageCount);
            return 0;
        }
    }
    printf("Package not found.\n");

    return 0;
}
