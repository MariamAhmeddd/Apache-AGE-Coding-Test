# Apache-AGE-Coding-Test 

# first Problem :

## Calculator Program in C

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


# Second Problem :

To implement the given piecewise recurrence relation F(n) = F(n-3) + F(n-2), where F(0) = 0, F(1) = 1, and F(2) = 2, there are three different approaches we can take:

## Recursion Approach (`fibonacciRecursive`)

- Advantages:
  - Simple and intuitive implementation.

- Disadvantages:
  - Inefficient for large `n` due to the exponential time complexity caused by redundant recursive calls.

## Dynamic Programming Approach - Top-Down (Memoization) (`fibonacciMemo`)

- Advantages:
  - Significant improvement over the recursive approach by avoiding redundant calculations.
  - Retains the simplicity of the recursive implementation.

- Disadvantages:
  - Requires additional memory to store the memoization array (`memo`).
  - Slow, due to lot of recursive calls and return statements.
 
 ## Dynamic Programming Approach - Bottom-Up (`fibonacciIterative`)

- Advantages:
  - Efficient and avoids the overhead of recursion.
  - No risk of running into stack overflow issues for large `n`.
  - Fast, as we directly access previous states from the table. 

- Disadvantages:
  - Requires additional memory to store the dynamic programming array (`dp`).

## standard Fibonacci in O(1) (`fibonacci`)

The standard fibonacci equation : f(n) = f(n - 1) + f(n - 2) and can be solved using any of the three approaches.
The standard Fibonacci problem can also be solved in o(1).
 
- Advantages:
  - Provides a direct formula to estimate Fibonacci numbers without iteration or recursion in o(1).

- Disadvantages:
  - floating-point arithmetic can introduce errors for large (`n`).
  - Not suitable for obtaining exact values but more commonly used for estimation or approximation.

## Method Comparison

- Time Complexity: The recursive approach has an exponential time complexity due to redundant recursive calls, making it inefficient for large values of (`n`). The memoization and iterative methods, on the other hand, have a time complexity of O(n) since they avoid duplicate calculations.

- Memory Usage: The recursive approach requires minimal additional memory, but the memoization method requires an array (memo) to store previously calculated Fibonacci numbers. The iterative method also requires an array (dp) to store the dynamic programming values. 

- Stack Overflow Risk: The recursive approach is prone to stack overflow issues when (`n`) is too large.

Feel free to explore and use the provided code based on your specific needs and constraints.
