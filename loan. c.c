#include <stdio.h>

Author:kipchumba
Reg no:CT102/G/24777/24
Date:30/9/2024


int main() {
    int age;
    float income;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Ksh): ");
    scanf("%f", &income);

    if (age >= 21 ,income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}


    