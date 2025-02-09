#include <stdio.h>
#include "rental.h"  // Include all headers
#include "bike.h"
#include "customer.h"

int main() {
    int choice;

    // Load data (if implemented)

    do {
        printf("\nBike Rental System\n");
        // ... menu options ...
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { // Add bike
                int id;
                char model[50];
                // Get input, call add_bike()
                break;
            }
            case 2: { // Add customer
                int id;
                char name[50], phone[20];
                // Get input, call add_customer()
                break;
            }
            case 3: { // Rent bike
                int bike_id, customer_id;
                // Get input, call rent_bike()
                break;
            }
            case 4: { // Return bike
                int rental_id;
                // Get input, call return_bike()
                break;
            }
            // ... other cases ...
            case 0: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    // Save data (if implemented)
    return 0;
}