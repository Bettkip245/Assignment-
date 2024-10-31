#include <stdio.h>

struct Student {
    char name[100];
    int marks;
};


int main() {
    struct Student student;
    
    FILE *fptr;

    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        
    }

    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter student marks: ");
    scanf("%d", &student.marks);

    fprintf(fptr, "%s %d\n", student.name, student.marks);
    fclose(fptr);

    printf("Data saved successfully.\n");
    return 0;
}
