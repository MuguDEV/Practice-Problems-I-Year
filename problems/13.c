// Check if a number is divisible by 3 or 13

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 3 == 0 ){
        printf("%d is divisible by 3\n", n);
    } else if (n % 13 == 0) {
        printf("%d is not divisible by 13\n", n);
    } else {
        printf("%d is not divisible by 3 and 13\n", n);
    }
    return 0;
}