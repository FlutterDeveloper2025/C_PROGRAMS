// WAP to check whether the string is Palindrome or not using Pointer //
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end;
    int flag = 1;

    printf("Enter a string: ");
    gets(str); 

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

