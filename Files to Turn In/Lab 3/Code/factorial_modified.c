/*
 * Lab 3: Assembly Language Translation - MODIFIED VERSION
 * Modified high-level C code to calculate factorial of 3 instead of 5
 * 
 * Changes made:
 * - Changed initial value from 5 to 3
 * - This will calculate 3! = 6 instead of 5! = 120
 */

#include <stdio.h>

int main() {
    // Register mapping:
    // $16 = n (counter variable)
    // $17 = result (accumulator for factorial)
    // $0 = always 0 (used for immediate values)
    
    int n = 3;        // $16 - MODIFIED: was 5, now 3
    int result = 1;   // $17 - corresponds to "addi $17,$0,1"
    
    printf("Calculating factorial of %d\n", n);
    printf("Initial values: n=%d, result=%d\n", n, result);
    
    // Main loop - corresponds to the "top:" label in assembly
    while (n > 0) {   // corresponds to "beq $16,$0,done"
        result = result * n;  // corresponds to "mul $17,$17,$16"
        n = n - 1;            // corresponds to "addi $16,$16,-1"
        
        printf("Loop: n=%d, result=%d\n", n, result);
    }
    
    // Store result in memory - corresponds to "sw $17,0x1234($0)"
    printf("Final result: %d\n", result);
    printf("This value would be stored at memory address 0x1234\n");
    
    return 0;
}
