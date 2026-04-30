#include <stdio.h>

void HomeWork7()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            printf("%d x %d = %2d  ", i, j, i * j);
        }
        printf("\n");
    }
}
void HomeWork7_1()
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {

        for (k = 0; k < 4 - i; k++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    HomeWork7();
    HomeWork7_1();
}