#include <stdio.h>

#define MAX 100 // Maximum size of the stack

// Global variables for stack
int stack[MAX];
int top = -1; // Stack is initially empty

// Function to add an item to the stack
void push(int item) {
    // Check if the stack is full
    if (top == MAX - 1) {
        printf("Stack overflow! Cannot push %d\n", item);
        return;
    }
    stack[++top] = item; // Increment top and add item
    printf("%d pushed to stack\n", item);
}

// Function to remove an item from the stack
int pop() {
    // Check if the stack is empty
    if (top == -1) {
        printf("Stack underflow! Cannot pop from empty stack\n");
        return -1; // Indicate error with -1
    }
    return stack[top--]; // Return top item and decrement top
}

// Function to return the top item of the stack without removing it
int peek() {
    // Check if the stack is empty
    if (top == -1) {
        printf("Stack is empty! Cannot peek\n");
        return -1; // Indicate error with -1
    }
    return stack[top]; // Return top item
}

// Function to change an element at a given index
void change(int index, int newValue) {
    // Check if the index is valid
    if (index < 0 || index > top) {
        printf("Invalid index! Please provide an index between 0 and %d.\n", top);
        return;
    }
    stack[index] = newValue; // Change the value at the specified index
    printf("Element at index %d changed to %d\n", index, newValue);
}

// Function to display elements of stack
void display(){
	
	if(top==-1){
		printf("Stack underflow no elements found!!");
		return;
	}else{
		printf("Elements of stack : \n");
		for(int i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}

// Function to read an integer from the user
int readInteger() {
    int num = 0;
    char ch;
    while (1) {
        ch = getchar(); // Read a character
        if (ch >= '0' && ch <= '9') {
            num = num * 10 + (ch - '0'); // Convert char to int
        } else if (ch == '\n') {
            break; // Break on newline
        }
    }
    return num; // Return the read integer
}

// Function to demonstrate stack operations
void stackOperations() {
    int choice, value, index;

    do {
        // Display menu options
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Change Element\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        choice = readInteger(); // Read user choice

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                value = readInteger(); // Read value to push
                push(value);
                break;
            case 2:
                value = pop(); // Pop value from stack
                if (value != -1) { // Check for error
                    printf("%d popped from stack\n", value);
                }
                break;
            case 3:
                value = peek(); // Peek at top value
                if (value != -1) { // Check for error
                    printf("Top item is %d\n", value);
                }
                break;
            case 4:
                printf("Enter index to change: ");
                index = readInteger(); // Read index to change
                printf("Enter new value: ");
                value = readInteger(); // Read new value
                change(index, value);
                break;
            case 5:
            	display();
            	break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);
}

// Entry point of the program
int main() {
    stackOperations(); // Call the function to perform stack operations
    return 0;
}
