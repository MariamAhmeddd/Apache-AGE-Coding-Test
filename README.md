# Apache-AGE-Coding-Test 
## first Problem :

# Calculator Program in C

This program demonstrates a simple calculator implemented in C. It supports basic arithmetic operations such as addition, subtraction, multiplication, and division. Additionally, it calculates the Fibonacci sequence up to a specified number.

## Code Explanation

The code consists of the following components:

1. **Header Files**: The program includes several standard header files such as `stdio.h`, `limits.h`, `string.h`, `math.h`, and `malloc.h`. These headers provide necessary functions for input/output, data type limits, string handling, mathematical operations, and memory allocation.

2. **Enumeration**: The program defines an enumeration called `TypeTag` which represents the types of arithmetic operations: `ADD`, `SUB`, `MUL`, and `DIV`. This enumeration is used to determine which operation to perform.

3. **Structure**: The program defines a structure called `Node` that represents a node in the arithmetic expression tree. Each node contains a `type` field indicating the operation type.

4. **Fibonacci Function**: The program includes a function called `fib` that calculates the Fibonacci sequence up to a specified number `n`. It uses dynamic memory allocation to create an array called `dp` to store the Fibonacci numbers. The function then iteratively calculates the Fibonacci sequence using dynamic programming. Finally, it frees the dynamically allocated memory and returns the Fibonacci number at position `n`.

5. **Arithmetic Operation Functions**: The program includes four arithmetic operation functions: `addition`, `subtraction`, `multiplication`, and `division`. These functions perform the corresponding arithmetic operations on two integers and return the result.

6. **Function Pointer Creation**: The program includes a function called `makeFunc` that takes a `TypeTag` parameter and returns a function pointer to the corresponding arithmetic operation function. This function is used to create function pointers based on the specified operation type.

7. **Calculation Function**: The program includes a function called `calc` that takes an arithmetic operation function pointer as a parameter and performs the operation if it is valid. The result is printed to the console.

8. **Main Function**: In the `main` function, several arithmetic operations are performed using the `makeFunc` and `calc` functions. Four `Node` pointers are created for addition, multiplication, subtraction, and Fibonacci calculation. These pointers are assigned the corresponding arithmetic operations using the `makeFunc` function. The `calc` function is then called to perform the operations and print the results.

9. **Additional Test Cases**: The program includes additional test cases for the division operation. Two `Node` pointers are created for division, one with a non-zero divisor and another with a zero divisor. The `calc` function is called to perform the division and print the results.

if you find any issues or have any suggestions, feel free to submit a pull request :)


## Second Problem :
To implement the given piecewise recurrence relation F(n) = F(n-3) + F(n-2), where F(0) = 0, F(1) = 1, and F(2) = 2, there are three different approaches we can take:
- Recursive Approach:

- Dynamic Programming (Top-down) Approach using Memoization:

- Dynamic Programming (Bottom-up) Approach using Tabulation:
