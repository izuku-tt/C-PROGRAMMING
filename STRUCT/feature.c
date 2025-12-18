#include <stdio.h>
#include <string.h>

// Define structure using typedef for easy usage
typedef struct {
    char brand[50];
    char model[50];
    int year;
    float engineCapacity;
    float price;
} Car;

int main() {
    // Initialize car1
    Car car1 = {"Toyota", "Camry", 2022, 2.5, 30000.0};

    // Copy car1 to car2(DEEP COPY)
    Car car2 = car1;

    // Change only the brand of car2
    strcpy(car2.brand, "Honda");

    // Print one common attribute (model) to verify other values are unchanged
    printf("Car 1 Brand: %s, Model: %s\n", car1.brand, car1.model);
    printf("Car 2 Brand: %s, Model: %s\n", car2.brand, car2.model);

    return 0;
}
