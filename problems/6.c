//Check if a person is eligible to vote.

#include <stdio.h>

int main() {
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Eligible to Vote\n");
    } else {
        printf("Not Eligible to Vote\n");
    }
    return 0;
}