#include <stdio.h>

struct Student {
    char name[100];
    int marks;
};

int main() {
    struct Student student;
    FILE *fptr;
    int n, k;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fptr = fopen("students.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        
    }

    for (k = 0; k< n; k++) {
        printf("Enter student name: ");
        scanf("%s", student.name);
        printf("Enter student marks: ");
        scanf("%d", &student.marks);

        fprintf(fptr, "%s %d\n", student.name, student.marks);
    }

    fclose(fptr);
    printf("Data appended successfully.\n");
    return 0;
}
