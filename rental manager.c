#include "rental.h"
#include <stdio.h>
#include <stdlib.h> // For malloc/free (if needed)
#include <string.h>  // For string functions

#define MAX_BIKES 100
#define MAX_CUSTOMERS 100

Bike bikes[MAX_BIKES];
int num_bikes = 0;

Customer customers[MAX_CUSTOMERS];
int num_customers = 0;

Rental rentals[MAX_RENTALS];
int num_rentals = 0;

void add_bike(int id, const char *model);
void add_customer(int id, const char *name, const char *phone);
void rent_bike(int bike_id, int customer_id);
void return_bike(int rental_id);
// ... other bike rental management functions (save, load, find bike/customer, etc.)