#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double A = 2.0;
    double mu = 0.5;
    double sigma = 0.8;
    double y;

    printf("請輸入 x：");
    scanf("%lf", &x);

    // 程式碼
    y = A * exp(-pow(x - mu, 2) / (2 * pow(sigma, 2)));

    printf("Gaussian y = %.4lf\n", y);

    return 0;
}
