#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(const char *str) {
    int left = 0, right = 0;
    
    // Finding the length of the string and initializing the right pointer
    while (str[right] != '\0') {
        right++;
    }
    right--;

    // Iterating until pointers meet
    while (left < right) {
        // Skipping non-letter characters from the beginning
        while (!isalpha(str[left]) && left < right) {
            left++;
        }
        // Skipping non-letter characters from the end
        while (!isalpha(str[right]) && left < right) {
            right--;
        }
        // Comparing characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Palindrome
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str)) {
        printf("The given string is a palindrome.\n");
    } else {
        printf("The given string is not a palindrome.\n");
    }
    
    return 0;
}