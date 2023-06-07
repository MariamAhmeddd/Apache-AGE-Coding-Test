#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV
};
typedef struct Node
{
    enum TypeTag type;
} Node;

int fib(int n){
    int *dp=malloc((n + 1) * sizeof(int));
    //int dp[n+2];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    int result = dp[n];
    free(dp);
    return result;
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    if(b == 0)
    {

        if(a < 0)
        {
            a = -1 * a;
            // we will minus 1 from a, as our dp is zero based so the forth number is in index 3
            // the example in the coding test :
            //you want the forth number but from the negative side which is located in the third index from the negative side.
            int x = fib(a - 1);
            return a&1? (-1 * x) : x;
        }
        else
        {
            int x = fib(a - 1);
            return x;
        }
    }
    else
    {
        return b - a;
    }
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return (b!=0) ? a / b : NULL;
}

int* (*makeFunc(enum TypeTag type))(int, int) {
    switch (type) {
        case ADD:
            return &addition;
        case SUB:
            return &subtraction;
        case MUL:
            return &multiplication;
        case DIV:
            return &division;
        default:
            printf("Invalid type!\n");
            return NULL;
    }
}

void calc(int (*operation)(int, int)) {
    if (operation) {
        int result = operation;
        printf("Result: %d\n", result);
    } else {
        printf("Invalid operation!\n");
    }
}

int main() {

    Node *add = (*makeFunc(ADD))(10, 6);
    Node *mul = (*makeFunc(MUL))(5, 4);
    Node *sub = (*makeFunc(SUB))(mul, add);
    Node *fibo = (*makeFunc(SUB))(sub, NULL);

    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    //test cases to test division operation
    Node *div = (*makeFunc(DIV))(6, 2);
    Node *div2 = (*makeFunc(DIV))(6, 0);
    calc(div);
    calc(div2);

    return 0;
}
