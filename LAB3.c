#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void readAndDisplayNumbers();
void sumFromMtoN();
void averageFirstN();
void findMinMaxPositions();
void checkDuplicates();
void replaceNumberInArray();
void printPascalTriangle();
void sortNamesAlphabetically();

// -------------------------------------------------- //
// 16. Read and display n numbers using an array ...
void readAndDisplayNumbers()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// -------------------------------------------------- //

// -------------------------------------------------- //
// 17. Calculate sum of numbers from m to n ...
void sumFromMtoN()
{
    int m, n, sum = 0;
    printf("Enter m and n (m <= n): ");
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        printf("Invalid input: m should be less than or equal to n.\n");
        return;
    }
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum from %d to %d is %d\n", m, n, sum);
}
// -------------------------------------------------- //

// -------------------------------------------------- //
// 18. Calculate average of first n numbers ...
void averageFirstN()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input: n should be positive.\n");
        return;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    float avg = (float)sum / n;
    printf("Average of first %d numbers is %.2f\n", n, avg);
}
// -------------------------------------------------- //

// -------------------------------------------------- //
// 19. Find position of smallest and largest number
// from given n numbers ...
void findMinMaxPositions()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input: n should be positive.\n");
        return;
    }
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0];
    int minPos = 0, maxPos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minPos = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }
    }
    printf("Smallest number is %d at position %d\n", min, minPos);
    printf("Largest number is %d at position %d\n", max, maxPos);
}
// -------------------------------------------------- //

// -------------------------------------------------- //
// 20. Check if array contains duplicate number ...
void checkDuplicates()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input: n should be positive.\n");
        return;
    }
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bool duplicate = false;
    for (int i = 0; i < n - 1 && !duplicate; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }
    }
    if (duplicate)
        printf("Array contains duplicate numbers.\n");
    else
        printf("Array does not contain duplicate numbers.\n");
}
// -------------------------------------------------- //

// -------------------------------------------------- //
// 21. Replace 1st number with 2nd number in array
// and print index and final array ...
void replaceNumberInArray()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input: n should be positive.\n");
        return;
    }
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num1, num2;
    printf("Enter two different numbers (num1 num2): ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        printf("Numbers must be different.\n");
        return;
    }
    int replacedIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num1)
        {
            arr[i] = num2;
            replacedIndex = i;
            break;
        }
    }
    if (replacedIndex != -1)
    {
        printf("Replaced %d with %d at index %d\n", num1, num2, replacedIndex);
        printf("Final array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("%d not found in array.\n", num1);
    }
}
// -------------------------------------------------- //

// -------------------------------------------------- //
// 22. Print Pascal triangle ...
void printPascalTriangle()
{
    int rows;
    printf("Enter number of rows for Pascal's triangle: ");
    scanf("%d", &rows);
    if (rows <= 0)
    {
        printf("Invalid input: rows should be positive.\n");
        return;
    }
    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                val = 1;
            else
                val = val * (i - j + 1) / j;
            printf("%d ", val);
        }
        printf("\n");
    }
}
// -------------------------------------------------- //

// -------------------------------------------------- //
// 23. Sort N names alphabetically using switch
// case (menu for sorting order) ...
void sortNamesAlphabetically()
{
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input: n should be positive.\n");
        return;
    }
    char names[n][50];
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    int orderChoice;
    printf("Choose sorting order:\n");
    printf("1. Ascending (A-Z)\n");
    printf("2. Descending (Z-A)\n");
    printf("Enter choice: ");
    scanf("%d", &orderChoice);

    switch (orderChoice)
    {
    case 1: // Ascending order
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(names[i], names[j]) > 0)
                {
                    char temp[50];
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
        printf("Names in ascending order:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", names[i]);
        }
        break;
    case 2: // Descending order
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(names[i], names[j]) < 0)
                {
                    char temp[50];
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
        printf("Names in descending order:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", names[i]);
        }
        break;
    default:
        printf("Invalid choice for sorting order.\n");
    }
}
// -------------------------------------------------- //

void main()
{
    int ch;
    do
    {
        printf("\nPRESS 0 FOR EXIT :: ");
        printf("\nPRESS 1 FOR READING AND DISPLAYING N NUMBERS :: ");
        printf("\nPRESS 2 FOR CALCULATING SUM OF N NUMBERS FROM N TO M :: ");
        printf("\nPRESS 3 FOR CALCULATING AVERAGE OF FIRST N NUMBERS :: ");
        printf("\nPRESS 4 FOR FINDING POSITION OF SMALLEST AND LARGEST NUMBER :: ");
        printf("\nPRESS 5 FOR CHECKING IF ARRAY CONTAINS DUPLICATE VALUES :: ");
        printf("\nPRESS 6 FOR REPLACING 1ST NUMBER WITH 2ND NUMBER IN AN ARRAY :: ");
        printf("\nPRESS 7 FOR PRINTING PASCAL'S TRIANGLE :: ");
        printf("\nPRESS 8 FOR SORTING NAMES ALPHABETICALLY :: ");
        printf("\nENTER YOUR CHOICE :: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            printf("Exiting program.\n");
            exit(0);
        case 1:
            readAndDisplayNumbers();
            break;
        case 2:
            sumFromMtoN();
            break;
        case 3:
            averageFirstN();
            break;
        case 4:
            findMinMaxPositions();
            break;
        case 5:
            checkDuplicates();
            break;
        case 6:
            replaceNumberInArray();
            break;
        case 7:
            printPascalTriangle();
            break;
        case 8:
            sortNamesAlphabetically();
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (ch != 0);
}
