#include <stdio.h>

void MyFunc2(int a, char b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%c ", b);
        }
        printf("\n");
    }
}

int main()
{
    MyFunc2(5, '+');
    MyFunc2(7, '@');
    MyFunc2(9, '*');

    return 0;
}
