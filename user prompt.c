#include <stdio.h>
#include <string.h>

#define TITLE_LENGTH 30
#define AUTHOR_LENGTH 30
#define ISBN_LENGTH 13  



struct book {
    char title[TITLE_LENGTH];
    char author[AUTHOR_LENGTH];
    int publication_year;
    char ISBN[ISBN_LENGTH];
    float price;
 };
    
int main() {
    
    
    
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99,
    };

    
    printf("enter Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    
    struct book userBook;

    printf("Enter details for another book:\n");
    
    printf("Title: ");
    fgets(userBook.title, TITLE_LENGTH, stdin);
    (userBook.title,userBook.title, "\n"); 

    printf("Author: ");
    fgets(userBook.author, AUTHOR_LENGTH, stdin);
    (userBook.author,userBook.author, "\n"); 

    printf("Publication Year: ");
    scanf("%d", &userBook.publication_year);
    
    printf("ISBN: ");
    scanf("%s", userBook.ISBN);
    
    printf("Price: ");
    scanf("%f", &userBook.price);

    printf("User-enter Book Details:\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: %.2f\n", userBook.price);

    return 0;
}
    