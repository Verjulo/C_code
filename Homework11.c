#include <stdio.h>

void MyFunc1(float a, char b, float c)
{
    float d = 0.0;
    switch (b)
    {
    case '+':
        d = (float)(a + c);
        break;
    case '-':
        d = (float)(a - c);
        break;
    case '*':
        d = (float)(a * c);
        break;
    case '/':
        if (c == 0)
        {
            printf("無效\n");
            return;
        }
        d = (float)(a / c);
        break;
    default:
        printf("無效的運算符\n");
    }
    printf("%.2f %c %.2f = %.2f\n", a, b, c, d);
}

int main()
{
    MyFunc1(8.0, '+', 5.0);
    MyFunc1(9.0, '-', 3.0);
    MyFunc1(4.0, '*', 2.0);
    MyFunc1(9.0, '/', 3.0);
    return 0;
}
