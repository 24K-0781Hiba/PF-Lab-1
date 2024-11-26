#include <stdio.h>
#include <string.h>

struct Car {
    char make[50];
    char model[50];
    int year;
    double price;
    double mileage;
};

void addCar(struct Car cars[], int *count) {
    printf("\nEnter car make: ");
    scanf(" %[^\n]", cars[*count].make);
    printf("Enter car model: ");
    scanf(" %[^\n]", cars[*count].model);
    printf("Enter car year: ");
    scanf("%d", &cars[*count].year);
    printf("Enter car price: ");
    scanf("%lf", &cars[*count].price);
    printf("Enter car mileage: ");
    scanf("%lf", &cars[*count].mileage);
    (*count)++;
}

void displayCars(struct Car cars[], int count) {
	int i;
    if (count == 0) {
        printf("\nNo cars available.\n");
        return;
    }
    printf("\nAvailable Cars:\n");
    for (i = 0; i < count; i++) {
        printf("\nMake: %s\nModel: %s\nYear: %d\nPrice: $%.2f\nMileage: %.2f km\n",
               cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
    }
}

void searchCars(struct Car cars[], int count, char *searchTerm) {
    int found = 0, i;
    printf("\nCars matching '%s':\n", searchTerm);
    for (i = 0; i < count; i++) {
        if (strstr(cars[i].make, searchTerm) || strstr(cars[i].model, searchTerm)) {
            printf("\nMake: %s\nModel: %s\nYear: %d\nPrice: $%.2f\nMileage: %.2f km\n",
                   cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
            found = 1;
        }
    }
    if (!found) {
        printf("No cars found matching '%s'.\n", searchTerm);
    }
}

int main() {
    struct Car cars[100];
    int carCount = 0;

    int choice;
    do {
        printf("\nCar Dealership System:\n");
        printf("1. Add a new car\n");
        printf("2. Display all cars\n");
        printf("3. Search for cars by make or model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCar(cars, &carCount);
                break;
            case 2:
                displayCars(cars, carCount);
                break;
            case 3: {
                char searchTerm[50];
                printf("Enter make or model to search: ");
                scanf(" %[^\n]", searchTerm);
                searchCars(cars, carCount, searchTerm);
                break;
            }
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
