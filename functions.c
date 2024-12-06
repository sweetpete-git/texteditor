// Defines the functions
#include <stdio.h>
#include "functions.h"

void openFile() {
    char buffer[256]; // Buffer to store lines from the file.
    printf("Opening file \n");
        FILE *f = fopen("sample.txt", "r"); // Open the file in read mode.
    if (f == NULL) {
        fprintf(stderr, "Error opening the file!\n");
        return 1;
    }

    // Read and print each line from the file.
    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        // Remove newline character if present
        buffer[strcspn(buffer, "\n")] = 0; 
        printf("%s\n", buffer);
    }

    fclose(f); // Close the file.
}

void createNewFile() {
    printf("Creating new file \n");
}

void exitEditor() {
    printf("Exiting editor \n");
}