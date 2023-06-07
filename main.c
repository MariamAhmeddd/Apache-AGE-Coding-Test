#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

//Method 1: Recursion Approach
int fibonacciRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return fibonacciRecursive(n - 3) + fibonacciRecursive(n - 2);
}

//Method 2: Dynamic Programming Approach (Top-Down(Memoization))
int fibonacciMemo(int n, int* memo) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (memo[n] != -1)
        return memo[n];
    else {
        memo[n] = fibonacciMemo(n - 3, memo) + fibonacciMemo(n - 2, memo);
        return memo[n];
    }
}

//Method 3: Dynamic Programming Approach (Bottom-Up)
int fibonacciIterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 3] + dp[i - 2];

    return dp[n];
}

/*
 With the three methods we can solve the normal fibonacci problem, which is :
 f(n) = f(n - 1) + f(n - 2).
 elso we can solve the normal fibonacci problem in o(1) by this code :
 */
int fibonacci(int n) {
    double x = (1 + sqrt(5)) / 2;
    double y = (1 - sqrt(5)) / 2;
    double fib = (pow(x, n) - pow(y, n)) / sqrt(5);
    return (int)fib;
}
/*
 However, this formula involves floating-point arithmetic, and due to the imprecision of floating-point numbers, it can introduce errors for large values of n. Additionally, calculating powers and square roots can be computationally expensive.
 It is more commonly used for estimating Fibonacci numbers or finding approximations rather than exact values.
 */
int main() {

    //initialize memo to be used in method 2: (memoization)
    int n = 100000;
    int memo[n+2];
    for(int i = 0; i <= n; i++)
    {
        memo[i] = -1;
    }
    printf("Recursion %d \n",  fibonacciRecursive(6));
    printf("Memoization %d \n",  fibonacciMemo(6,memo));
    printf("Iterative %d \n",  fibonacciIterative(6));
    printf("Normal Fibonacci in o(1) %d \n",  fibonacci(6));

    return 0;
}
