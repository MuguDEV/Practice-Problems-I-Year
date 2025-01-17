//Max of two numbers, smallest of two numbers

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }
    if (a < b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }
    return 0;
}