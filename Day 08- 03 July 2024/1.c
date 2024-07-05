#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name = malloc(100 * sizeof(char));  // Allocate memory for the name
    if (name == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter your name: ");
    scanf("%99s", name);  // Use %99s to avoid buffer overflow
    printf("Namaste %s\n", name);
    free(name);  // Free the allocated memory
    return 0;
}

