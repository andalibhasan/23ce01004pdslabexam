#include <stdio.h>
#include <string.h>

int isSubstring(char *string, char *substring) {
    int i, j;
    int stringLength = strlen(string);
    int subStringLength = strlen(substring);

    for (i = 0; i <= stringLength - subStringLength; i++) {
        for (j = 0; j < subStringLength; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == subStringLength)
            return 1; // substring found
    }
    return 0; // substring not found
}

int main() {
    char string[100], substring[100];
    printf("Enter the string: ");
    scanf("%s", string);
    printf("Enter the substring to check: ");
    scanf("%s", substring);

    if (isSubstring(string, substring))
        printf("'%s' is present in '%s'\n", substring, string);
    else
        printf("'%s' is not present in '%s'\n", substring, string);

    return 0;
}