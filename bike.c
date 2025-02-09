#ifndef BIKE_H
#define BIKE_H

#include <stdbool.h> // For bool type

#define MAX_MODEL_LENGTH 50

typedef struct {
    int id;
    char model[MAX_MODEL_LENGTH];
    bool available;
} Bike;

#endif