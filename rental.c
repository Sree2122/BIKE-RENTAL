#ifndef RENTAL_H
#define RENTAL_H

#include "bike.h"
#include "customer.h"

#define MAX_RENTALS 100

typedef struct {
    int rental_id;
    int bike_id;
    int customer_id;
    char start_time[20]; // YYYY-MM-DD HH:MM:SS
    char return_time[20];
    float rental_cost;
} Rental;

#endif