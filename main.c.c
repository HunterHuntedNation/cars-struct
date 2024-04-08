#include <stdio.h>
#include <string.h>

#define MAX_CARS 10
#define MAX_MODEL_LENGTH 50

// Define a structure to represent a car
struct Car {
    char model[MAX_MODEL_LENGTH];
    int year;
    float pricee
    ;
};

// Function to input details of a car
void inputCar(struct Car *car, int index) {
    printf("Enter details for Car %d:\n", index + 1);
    
    printf("Enter model: ");
    fgets(car->model, MAX_MODEL_LENGTH, stdin);
    car->model[strcspn(car->model, "\n")] = '\0'; // Remove trailing newline
    
    printf("Enter year: ");
    scanf("%d", &car->year);

    printf("Enter price: ");
    scanf("%f", &car->price);

    // Consume the newline character left in the input buffer
    getchar();
}
// Function to print details of a car
void printCar(const struct Car *car, int index) {
    printf("Car %d:\n", index + 1);
    printf("Model: %s\n", car->model);
    printf("Year: %d\n", car->year);
    printf("Price: $%.2f\n", car->price);
    printf("\n");
}

int main() {
    struct Car cars[MAX_CARS];

    // Input details for each car
for (int i = 0; i < MAX_CARS; i++) {
    inputCar(&cars[i], i);
}


    // to display information about all cars
    printf("List of Cars:\n");
    for (int i = 0; i < MAX_CARS; i++) {
        if (strlen(cars[i].model) > 0) {
            printCar(&cars[i], i);
        }
    }

    return 0;
}
