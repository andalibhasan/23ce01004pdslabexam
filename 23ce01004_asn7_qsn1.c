#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0; int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of %c = %d\n", ch, count);

    return 0;
}