#include <stdio.h>

void work1(char name[], int studentID, float score, char sex)
{
    printf("姓名:%s\n", name);
    printf("學號:%d\n", studentID);
    printf("性別:%c\n", sex);
    printf("分數:%.1f\n", score);
}

int main()
{
    char name[] = "黃正祐";
    int studentID = 11038005;
    float score = 99.7;
    char sex = 'M';
    work1(name, studentID, score, sex);
    return 0;
}