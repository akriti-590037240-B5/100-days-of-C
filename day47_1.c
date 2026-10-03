//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0}; // Frequency array for all ASCII characters
    
    // Count frequency of characters in str1
    for(int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }
    
    // Subtract frequency of characters in str2
    for(int i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }
    
    // Check if all counts are zero
    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            return 0; // Not anagrams
        }
    }
    
    return 1; // Anagrams
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
    
    if(areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    
    return 0;
}