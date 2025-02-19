#include <stdio.h>

/* 
Function: print_binary_reverse
Prints the binary representation of an 8-bit unsigned integer
in reverse order (from least significant to most significant bit).
num: The number to be converted and printed in binary format.
 */

void print_binary_reverse(unsigned char num) {
    printf("%d%d%d%d%d%d%d%d\n",
        (num >> 0) & 1,  // Extract the 1st (least significant) bit
        (num >> 1) & 1,  // Extract the 2nd bit
        (num >> 2) & 1,  // Extract the 3rd bit
        (num >> 3) & 1,  // Extract the 4th bit
        (num >> 4) & 1,  // Extract the 5th bit
        (num >> 5) & 1,  // Extract the 6th bit
        (num >> 6) & 1,  // Extract the 7th bit
        (num >> 7) & 1   // Extract the 8th (most significant) bit
    );
}

int main() {
    unsigned char num = 0;  // Variable to store user input

    // Prompt the user for an input number between 0 and 255
    printf("Please enter a number (0-255): ");
    scanf("%hhu", &num); // Read the input as an unsigned 8-bit integer

    // Print the binary representation of the input number in reverse order
    printf("Binary representation (reversed): ");
    print_binary_reverse(num);

    return 0;  // Return 0 to indicate successful execution
}
