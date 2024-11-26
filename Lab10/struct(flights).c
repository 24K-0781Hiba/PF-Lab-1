#include <stdio.h>
#include <string.h>

struct Flight {
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[15];
    int seats;
};

void displayFlightDetails(struct Flight flight) {
    printf("\nFlight Number: %d\nDeparture: %s\nDestination: %s\nDate: %s\nAvailable Seats: %d\n",
           flight.flightNumber, flight.departureCity, flight.destinationCity, flight.date, flight.seats);
}

void bookSeat(struct Flight *flight) {
    if (flight->seats > 0) {
        flight->seats--;
        printf("Seat successfully booked! Seats remaining: %d\n", flight->seats);
    } else {
        printf("No seats available.\n");
    }
}

int main() {
    struct Flight flights[] = {
        {111, "Karachi", "Islamabad", "2024-11-25", 10},
        {222, "Lahore", "Karachi", "2024-11-23", 5}
    };
    int flightCount = 2, i;

    printf("Available Flights:\n");
    for (i = 0; i < flightCount; i++) {
        displayFlightDetails(flights[i]);
    }

    int flightNumber;
    printf("\nEnter flight number to book a seat: ");
    scanf("%d", &flightNumber);

    for (i = 0; i < flightCount; i++) {
        if (flights[i].flightNumber == flightNumber) {
            bookSeat(&flights[i]);
            displayFlightDetails(flights[i]);
            return 0;
        }
    }
    printf("Flight not found.\n");

    return 0;
}
