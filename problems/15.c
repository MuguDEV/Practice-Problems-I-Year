//Check if a character is uppercase or lowercase

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z') {
        printf("lowercase\n");
    } else if (c >= 'A' && c <= 'Z') {
        printf("uppercase\n");
    } 
    return 0;
}