//Check if the given char is a lower-case alphabet

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z') {
        printf("Character is a lower-case alphabet\n");
    } else {
        printf("Character is not a lower-case alphabet\n");
    }
    return 0;
}