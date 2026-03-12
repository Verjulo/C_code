#include <stdio.h>

void homework3_2()
{
    float sum;
    int a = 48; // 0011 0000
    int b = 51; // 0011 0011
    a = a << 2; // 1100 0000
    b = b >> 3; // 0000 0011
    printf("%d\n", a);
    printf("%d\n", b);
    b = ~b;
    printf("%d\n", b);
    sum = a ^ b;
    printf("%f\n", sum);
}
int main()
{
    float y;
    int a = 6, b = 4, c = 2;
    int x = 3;
    y = (float)(((a - 5) / 7) * x * x * x) + ((b + 9) / 5 * x * x) + ((c - 2) / 3 * x + 1);
    printf("%f\n", y);
    homework3_2();
}