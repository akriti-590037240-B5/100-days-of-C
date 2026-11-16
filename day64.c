//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
int lengthOfLongestSubstring(char *s) {
    int n = 0;      
    int maxLength = 0;
    int charIndex[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (charIndex[(unsigned char)s[i]] > n) {
            n = charIndex[(unsigned char)s[i]];
        }
        charIndex[(unsigned char)s[i]] = i + 1;
        if (i - n + 1 > maxLength) {    
            maxLength = i - n + 1;
        }
    }
    return maxLength;
}

int main() {
    char s[] = "abcabcbb";
    int length = lengthOfLongestSubstring(s);
    printf("%d\n", length);
    return 0;
}