#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
    char choice;
    printf("(2) New (2) Open (3) Exit \n");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '1': // New
        printf("Case 1 is matched.");
        break;
    
    case '2': // Open
        printf("Case 2 is matched.");
        openFile();
        break;
    
    case '3': // Exit
        break;
    
    default:
        printf("Default case is matched.");
        break;
    }
    
    return 0;
}