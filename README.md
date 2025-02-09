# Bike Rental System (C Project - Simplified Example)

This is a *highly simplified* Bike Rental System application written in C.  It provides a basic framework for managing bikes, customers, and rentals.  **This example is for educational purposes only and is not a production-ready system.**  It lacks many essential features and error handling required for real-world use.

**Disclaimer:** This code is *not* intended for actual deployment. It is a highly simplified example for educational purposes only. Using this code in a real-world scenario without significant modifications and addressing scalability, security, and error handling is strongly discouraged.

## Features (Highly Simplified)

*   **Bike Management:** Add new bikes to the system.
*   **Customer Management:** Register new customers.
*   **Rental Management:** Rent bikes to customers, return bikes.
*   **(Basic Menu-Driven Interface):**  Simple command-line interface for interaction.

## Build Instructions (using GCC)

1.  Save all `.c` and `.h` files in the same directory.
2.  Open a terminal or command prompt in that directory.
3.  Compile:
    ```bash
    gcc main.c bike_rental_management.c -o bike_rental
    ```
4.  Run:
    ```bash
    ./bike_rental
    ```

## Usage

1.  Run the executable (`./bike_rental`).
2.  Follow the menu prompts to interact with the system.

## File Format (Not Implemented in Basic Example)

Data persistence (saving and loading data to a file or database) is *not* implemented in this basic example.  You would need to add this functionality.  Possible formats include:

*   Plain text files (CSV, JSON)
*   Binary files
*   Database (SQLite, PostgreSQL, etc.)

## Code Structure

*   `bike.h`: Defines the `Bike` struct.
*   `customer.h`: Defines the `Customer` struct.
*   `rental.h`: Defines the `Rental` struct.
*   `bike_rental_management.c`: Implements the core logic for managing bikes, customers, and rentals.
*   `main.c`: Contains the `main` function and handles user interaction (basic menu).

## Data Structures (Example)

```c
// bike.h
typedef struct {
    int id;
    char model[50];
    bool available;
} Bike;

// customer.h
typedef struct {
    int id;
    char name[50];
    char phone[20];
} Customer;

// rental.h
typedef struct {
    int rental_id;
    int bike_id;
    int customer_id;
    char start_time[20]; // YYYY-MM-DD HH:MM:SS
    char return_time[20];
    float rental_cost;
} Rental;
