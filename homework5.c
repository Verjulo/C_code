#include <stdio.h>

void happyNewYear()
{
    int i = 10;
    while (i > 0)
    {
        printf("%d ,", i);
        i--;
    }
    printf("HappyNewYear!");
}

int main()
{
    happyNewYear();
}
