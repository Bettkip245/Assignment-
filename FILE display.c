#include <stdio.h>

struct Student {
    char name[100];
    int marks;
};

int main() {
    struct Student students[100];
    FILE *fptr;
    int n, k;

    printf("Enter number of students: ");
    scanf("%d",&n);
    for (k = 0; k < n; k++) {
        printf("Enter student name: ");
        scanf("%s", students[k].name);
        printf("Enter student marks: ");
        scanf("%d", &students[k].marks);
    }

    
    fptr = fopen("students.bin", "wb");
    if (fptr == NULL){ 
        
    }
    fwrite(students, sizeof(struct Student), n, fptr);
    

    
    fptr = fopen("students.bin", "rb");
    if (fptr == NULL) {
        
    }

    printf("Data from fptr:\n");
    fread(students, sizeof(struct Student), n, fptr);
    for (k = 0; k < n; k++) {
        printf("Name: %s, Marks: %d\n", students[k].name, students[k].marks);
    }

    fclose(fptr);
    return 0;
}