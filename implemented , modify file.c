#include <stdio.h>


struct max_length;

 writeToFile(const char *filename) {
    char sentence[100];

    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    FILE *fptr= fopen(filename, "a"); 
    if (fptr == NULL) {
        
        
    }

    fprintf(fptr, "%s", sentence);
    fclose(fptr);
}

 readFromFile(const char *filename) {
    char k;
    FILE *fptr = fopen(filename, "r"); 
    if (fptr == NULL) {
        
        
    }

    printf("Content of %s:\n", filename);
    while ((k = fgetc(fptr)) != EOF) {
        putchar(k);
    }
    fclose(fptr);
}

int main() {
    const char *filename = "data.txt";

    
    writeToFile(filename);
    
    readFromFile(filename);

    
    writeToFile(filename);
    
    
    readFromFile(filename);

    return 0;
}
    