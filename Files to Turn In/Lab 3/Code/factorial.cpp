/*
 * Lab 3: Assembly Language Translation
 * High-level C++ code equivalent to MIPS assembly program
 * 
 * Assembly Program Analysis:
 * - Calculates factorial of 5 (5! = 120)
 * - Uses registers $16 (counter) and $17 (result)
 */

#include <iostream>
using namespace std;

int main() {
    // Register mapping:
    // $16 = n (counter variable)
    // $17 = result (accumulator for factorial)
    // $0 = always 0 (used for immediate values)
    
    int n = 5;        // $16 - corresponds to "addi $16,$0,5"
    int result = 1;   // $17 - corresponds to "addi $17,$0,1"
    
    cout << "Calculating factorial of " << n << endl;
    cout << "Initial values: n=" << n << ", result=" << result << endl;
    
    // Main loop - corresponds to the "top:" label in assembly
    while (n > 0) {   // corresponds to "beq $16,$0,done"
        result = result * n;  // corresponds to "mul $17,$17,$16"
        n = n - 1;            // corresponds to "addi $16,$16,-1"
        
        cout << "Loop: n=" << n << ", result=" << result << endl;
    }
    
    // Store result in memory - corresponds to "sw $17,0x1234($0)"
    // In a real system, this would store the value at memory address 0x1234
    cout << "Final result: " << result << endl;
    cout << "This value would be stored at memory address 0x1234" << endl;
    
    return 0;
}
