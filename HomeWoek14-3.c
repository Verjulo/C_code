#include <stdio.h>

int factorial(int n);

int main()
{
    printf("Factorial of 12 is %d", factorial(12));
    return 0;
}

int factorial(int n)
{
    if (n == 1) // 終止條件
        return 1;
    else
        return n * factorial(n - 1); // 遞迴呼叫
}
