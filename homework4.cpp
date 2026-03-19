#include <stdio.h>
#include <stdbool.h>

void homework4()
{
    while (1)
    {
        int fuel;
        printf("請輸入目前油量: ");
        scanf("%d", &fuel);
        if (fuel == 0)
        {
            printf("E | _____ | F\n");
        }
        else if (fuel > 0 && fuel <= 25)
        {
            printf("E | #____ | F\n");
        }
        else if (fuel > 25 && fuel <= 50)
        {
            printf("E | ##___ | F\n");
        }
        else if (fuel > 50 && fuel <= 75)
        {
            printf("E | ###__ | F\n");
        }
        else if (fuel > 75 && fuel <= 99)
        {
            printf("E | ####_ | F\n");
        }
        else if (fuel > 99)
        {
            printf("E | ##### | F\n");
        }
    }
}

int main()
{
    homework4();
}
