// Determine if a character is a vowel or consonant

#include <stdio.h>
#include <stdbool.h>

int main() {
    char c;
    bool condition;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    condition = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    if (condition) {
        printf("%c is a vowel\n", c);
    } else {
        printf("%c is a consonant\n", c);
    }
    return 0;
}