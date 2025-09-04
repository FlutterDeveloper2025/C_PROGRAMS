// WAP to allocate and de-allocate memory for int, char and float variable at runtime //
#include <stdio.h>
#include <stdlib.h>

void main() {
    int *pInt = malloc(sizeof(int));
    char *pChar = malloc(sizeof(char));
    float *pFloat = malloc(sizeof(float));

    if (pInt == NULL || pChar == NULL || pFloat == NULL) {
        printf("Memory allocation failed\n");
    }

    *pInt = 10;
    *pChar = 'X';
    *pFloat = 5.5;

    printf("Integer: %d\n", *pInt);
    printf("Character: %c\n", *pChar);
    printf("Float: %.2f\n", *pFloat);

    free(pInt);
    free(pChar);
    free(pFloat);
}

