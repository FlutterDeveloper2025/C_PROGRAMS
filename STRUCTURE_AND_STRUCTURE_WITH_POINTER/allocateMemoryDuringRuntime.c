// Dynamically allocate & de-allocate memory for int, char and float variable at
// runtime //
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pInt;
    char *pChar;
    float *pFloat;

    // Dynamically allocate memory
    pInt = (int *)malloc(sizeof(int));
    pChar = (char *)malloc(sizeof(char));
    pFloat = (float *)malloc(sizeof(float));

    // Check if memory allocation was successful
    if (pInt == NULL || pChar == NULL || pFloat == NULL) {
        printf("Memory allocation failed\n");
        free(pInt);
        free(pChar);
        free(pFloat);
        return 1;
    }

    // Input values from user
    printf("Enter an integer value: ");
    scanf("%d", pInt);

    printf("Enter a character value: ");
    getchar();
    scanf("%c", pChar);

    printf("Enter a float value: ");
    scanf("%f", pFloat);

    // Print values
    printf("\nYou entered:\n");
    printf("Integer: %d\n", *pInt);
    printf("Character: %c\n", *pChar);
    printf("Float: %.2f\n", *pFloat);

    // De-allocate memory
    free(pInt);
    free(pChar);
    free(pFloat);

    return 0;
}

