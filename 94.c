#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char brand[20];
    char model[20];
    int year;
    int price;
} Car;

int main() {
    Car *myCar = (Car*) malloc(sizeof(Car));

    if (myCar == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(myCar->brand, "Toyota");
    strcpy(myCar->model, "Corolla");
    myCar->year = 2022;
    myCar->price = 1500000;

    printf("Car Details:\n");
    printf("Brand: %s\n", myCar->brand);
    printf("Model: %s\n", myCar->model);
    printf("Year: %d\n", myCar->year);
    printf("Price: %d\n", myCar->price);

    free(myCar);
    return 0;
}
