#include <stdio.h>

Author: kipchumba 
Reg no :CT102/G/2777/24
Date:30/9/2024


// preprocessor directive - scanf(),print()
int main() {

    int bookID, dueDate, returnDate;
    int daysOverdue;
    float fineRate = 0, fineAmount = 0;

    
    printf("Enter the Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter the Due Date (in days): ");
    scanf("%d", &dueDate);
    
    printf("Enter the Return Date (in days): ");
    scanf("%d", &returnDate);

    
    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        fineRate = 0;  
    } else if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    
    fineAmount = fineRate * daysOverdue;
    printf("\nBook ID: %d", bookID);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d", returnDate);
    printf("\nDays Overdue: %d", daysOverdue);
    printf("\nFine Rate: Ksh %.2f", fineRate);
    printf("\nTotal Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}