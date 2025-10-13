#include <stdio.h>

void BMI_SP(float BMI)
{
    if (BMI < 18.5)
    {
        printf("過輕囉");
    }
    if (BMI >= 18.5 and BMI < 24)
    {
        printf("適中\n");
    }
    if (BMI >= 24 and BMI < 27)
    {
        printf("過重囉!!\n");
    }
    if (BMI > 27)
    {
        printf("你超肥哈哈哈\n");
    }
}
int main()
{
    float BMI;
    float weieght;
    float height;

    printf("請輸入體重(kg):");
    scanf("%f", &weieght);
    printf("請輸入身高(m):");
    scanf("%f", &height);
    BMI = (weieght) / height / height;
    printf("%f\n", BMI);
    BMI_SP(BMI);
    return 0;
}