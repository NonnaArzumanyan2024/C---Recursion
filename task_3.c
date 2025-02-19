#include <stdio.h>

/* 
 * Function: count_ones
 * --------------------
 *  Counts the number of 1-bits (set bits) in the binary representation 
 *  of an unsigned integer using bitwise operations.
 *
 *  num: The number whose 1-bits will be counted.
 *  
 *  Returns: The number of 1-bits in the binary representation of the number.
 */
int count_ones(unsigned int num) {
    int count = 0;

    // Keep reducing the number by using the 'AND' operation with 'num - 1'
    while (num != 0) {
        num &= (num - 1); // This operation removes the rightmost 1-bit
        ++count;  // Increment count for each removed 1-bit
    }

    return count;
}

int main() {
    unsigned int num = 0;

    // Prompt the user for an input number
    printf("Please enter a number: ");
    scanf("%u", &num); // Read the input as an unsigned integer

    // Print the number of 1-bits in the binary representation
    printf("Number of 1-bits: %d\n", count_ones(num));

    return 0;  // Return 0 to indicate successful execution
}
