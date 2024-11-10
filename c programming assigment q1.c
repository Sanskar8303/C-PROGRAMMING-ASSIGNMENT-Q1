#include <stdio.h>

// Function to print binary representation
void print_binary(int num) {
    int bits = sizeof(num) * 8;
    for (int i = bits - 1; i >= 0; --i) {
        (num & (1 << i)) ? printf("1") : printf("0");
    }
}

// Function to print octal representation
void print_octal(int num) {
    printf("%o", num);
}

// Function to print hexadecimal representation
void print_hexadecimal(int num) {
    printf("%x", num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary: ");
    print_binary(num);
    printf("\n");

    printf("Octal: ");
    print_octal(num);
    printf("\n");

    printf("Hexadecimal: ");
    print_hexadecimal(num);
    printf("\n");

    return 0;

}
