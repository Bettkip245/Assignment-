#include <stdio.h>

/*
Author: kipchumba 
Reg no:CT102/G/24777/24
Date:7/9/2024
*/

int main() {

    int customer_ID, units;
    char customer_name[20];
    float total_bill, total_charge, charge_per_unit;
    
    printf("Enter your name: ");
    scanf("%19s", customer_name);
    
    printf("Enter your customer ID: ");
    scanf("%d", &customer_ID);
    
    printf("Enter the units consumed; ");
    scanf("%d", &units);
    
    if (units <=199) {
        charge_per_unit= 1.2;
        total_bill = units* 1.2;
    } else if(units >=200 && units <400) {
        charge_per_unit= 1.5;
        total_bill = units* 1.5;
    } else if(units >=400 &&units <600){
        charge_per_unit= 1.8;
       total_bill = units* 1.8;
    } else {
        charge_per_unit= 2.0;
        total_bill = units* 2.0;
    }
    
    if (total_bill >400){
        total_charge = total_bill + (total_bill * 0.15);
    }
    
    if (total_bill < 100){
        (total_charge = 100);
    }
        
    printf("\nCustomer ID:%d \n", customer_ID);
    printf("Name:%s\n", customer_name);
    printf("You have consumed:%d\n", units);
    printf("The charge per unit is:%.2f\n", charge_per_unit);
    printf("Total amount to pay:%.2f", total_charge);
    
    return 0;
}