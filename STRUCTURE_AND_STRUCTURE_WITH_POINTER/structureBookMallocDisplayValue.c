// WAP to create a structure Book with title and price. Use malloc() to allocate
// memory and input/display values //
#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    float price;
};

int main() {
    struct Book *ptr;

    // Dynamically allocate memory for one Book
    ptr = (struct Book *)malloc(sizeof(struct Book));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input book details
    printf("Enter Book Title: ");
    // Use fgets to allow spaces in title
    fgets(ptr->title, sizeof(ptr->title), stdin);

    // Remove trailing newline character from fgets
    size_t len = 0;
    while (ptr->title[len] != '\0') len++;
    if (len > 0 && ptr->title[len - 1] == '\n') {
        ptr->title[len - 1] = '\0';
    }

    printf("Enter Book Price: ");
    scanf("%f", &ptr->price);

    // Display book details
    printf("\nBook Details:\n");
    printf("Title: %s\n", ptr->title);
    printf("Price: %.2f\n", ptr->price);

    // Free allocated memory
    free(ptr);

    return 0;
}

