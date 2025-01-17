// headers
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// glob variables
int choice;
float celsius;
float fahrenheit;
float kg;
float pounds;
bool loopflag = true;

// main
int main() {

    while (loopflag == true) {
        printf("\n\n");
        printf("Menu:\n1) Celsius --> Fahrenheit\n2) Fahrenheit --> Celsius\n3) Kg --> Pound\n4) Pound --> Kg\n5) Exit");
        printf("\n\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter the temperature in Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = celsius * 9.0/5.0 + 32;
                printf("The temperature in Fahrenheit is %.2f", fahrenheit);
                break;

            case 2:
                printf("Please enter the temperature in Fahrenheit: ");
                scanf("%f", &fahrenheit);
                celsius = (fahrenheit -32) * 5.0/9.0;
                printf("The temperature in Celsius is %.2f", celsius);
                break;

            case 3:
                printf("Please enter the mass in Kilograms: ");
                scanf("%f", &kg);
                pounds = kg * 2.204623;
                printf("The mass in Pounds is %.2f", pounds);
                break;

            case 4:
                printf("Please enter the mass in Pounds: ");
                scanf("%f", &pounds);
                kg = pounds / 2.204623;
                printf("The mass in Kilograms is %.2f", kg);
                break;

            case 5:
                printf("Exiting...\n");
                loopflag = false;
                break;

            default:
                printf("This is not an otpion!");
        };
    }

    return 0;
}