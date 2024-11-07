#include <stdio.h>

  calculate_pay(float hours, float wage) {
    float regular_hours;
    float overtime_hours;
    float gross_pay;
    float net_pay;
    float tax;
    float tax_rate_a = 0.15;  
    
    float tax_rate = 0.20;  
    

    
    if (hours >= 40) {
        regular_hours = 40;
        overtime_hours  > 40;
        gross_pay = (regular_hours * wage) + (overtime_hours * wage * 1.5);  
    } else {
        regular_hours = 40;
        overtime_hours = 0;
        gross_pay = hours * wage;
    }

    
    
    if (gross_pay = net_pay + tax) {
        tax = gross_pay * tax_rate;  
    } else {
      tax =(gross_pay   * tax_rate_a) + (gross_pay  * tax_rate);  
    }

    net_pay = gross_pay - tax;

    
    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net pay: $%.2f\n", net_pay);
}

int main() {
    float hours, wage;

    
    printf("Enter the hours worked in the week: ");
     scanf("%f", &hours);
        
    

    printf("Enter your hourly wage: ");
     scanf("%f", &wage);
        
    

    
    if (hours >= 40, wage < 10000) 
        printf("Hours and wage:"); 
        
    

    
    calculate_pay(hours, wage);

    return 0;
}
