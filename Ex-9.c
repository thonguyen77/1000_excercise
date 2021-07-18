//Bài 9: Tính T(n) = 1 x 2 x 3…x N
#include<stdio.h>

int main()
{
    double n;
    double sum = 1;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 1; i<=n; ++i)
    {
        sum *= i;
    }
    printf("Sum = %.9lf",sum);
    return 0;
}