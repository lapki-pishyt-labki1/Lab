#include <stdio.h>
#include <stdbool.h>

int main() {
    int number, even = 0, odd = 0, reversed = 0, digit;
    bool validInput = true;

    printf("Enter an integer: ");
    
    if (scanf("%d", &number) != 1) {
        validInput = false;
    } else if (number < 0) {
        validInput = false;
    }

    if (!validInput) {
        printf("Incorrect data entered.\n");
        return 1;
    }

    while (number > 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            even = even * 10 + digit;
        } else {
            odd = odd * 10 + digit;
        }
        number /= 10;
    }

    reversed = even;
    while (odd > 0) {
        digit = odd % 10;
        reversed = reversed * 10 + digit;
        odd /= 10;
    }

    printf("A number with rearranged digits: %d\n", reversed);

    return 0;
}

