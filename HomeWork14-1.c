#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;

    printf("請輸入 x：");
    scanf("%lf", &x);

    y = sqrt(pow(x, 2) * 2 + 3 * x + 5) + fabs(x - 10);

    printf("y = %f\n", y);

    return 0;
}