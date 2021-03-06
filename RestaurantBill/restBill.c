/*
    First, need to include stdio.h, sidlib.h, and time.h to use input/output, and generate random numbers.
    Create main with int argc and char *argv[].
    Create variable ot time_t element.
    Create an array of type double with meal cost
    Initiate the random number generator using srand and time_t variable
    Create a double variable and assign it a random value from the array
    Display the meal cost.
    Display the tax amount by multiplying meal cost by the tax percent from the command line.
    Display the tip amount by multiplying meal cost by the tip percent from the command line.
    Display the total bill by adding the meal cost, tax amount, and tip amount.
    End Program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    time_t t;
    double arr[] = {9.95, 4.55, 13.25, 22.35};

    srand((unsigned) time(&t));

    double cost = arr[rand() % 4];

    printf("Meal cost: %f\n", cost);
    printf("Tax amount: %f\n", cost * (atof(argv[1]) / 100));
    printf("Tip amount: %f\n", cost * (atof(argv[2]) / 100));
    printf("Total bill: %f\n", cost + (cost * (atof(argv[1]) / 100)) + (cost * (atof(argv[2]))/ 100));

    return 0;
}