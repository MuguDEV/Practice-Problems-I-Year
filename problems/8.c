// Check if a number lies between two given numbers (range).

#include <stdio.h>

int main() {
    int num, lower, upper;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    if (num >= lower && num <= upper) {
        printf("Number lies in the range\n");
    } else {
        printf("Number does not lie in the range\n");
    }
    return 0;
}
