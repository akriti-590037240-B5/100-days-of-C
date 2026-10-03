//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}