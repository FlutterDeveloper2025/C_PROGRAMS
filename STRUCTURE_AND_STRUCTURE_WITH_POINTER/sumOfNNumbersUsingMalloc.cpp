// Calculate the sum of n numbers entered by the user using malloc() //
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *numbers;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum
    for (i = 0; i < n; i++) {
        sum += numbers[i];
    }

    printf("Sum of the numbers = %d\n", sum);

    // Free the allocated memory
    free(numbers);

    return 0;
}

