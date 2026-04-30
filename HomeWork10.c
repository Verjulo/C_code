#include <stdio.h>

void ch10()
{

    int i;
    int numbers[5] = {11, 22, 33, 44, 55};

    numbers[0] = 10;
    numbers[4] = 50;
    for (i = 0; i < 5; i++)
    {
        printf("%d,", numbers[i]);
    }
}
void ch10_2()
{
    int i;
    int chinese = 0;
    int math = 0;
    int english = 0;
    int score[5][3] = {{80, 75, 90}, {70, 85, 88}, {95, 90, 92}, {60, 70, 65}, {88, 82, 79}};

    for (i = 0; i < 5; i++)
    {
        chinese += score[i][0];
        english += score[i][1];
        math += score[i][2];
    }
    float avg_chinese = (float)chinese / 5;
    float avg_english = (float)english / 5;
    float avg_math = (float)math / 5;

    printf("國文平均成績:%.2f\n", avg_chinese);
    printf("英文平均成績:%.2f\n", avg_english);
    printf("數學平均成績:%.2f\n", avg_math);
}
int main()
{

    // ch10();
    ch10_2();
}
