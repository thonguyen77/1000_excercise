//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
#include<stdio.h>
#include<math.h>

int main()
{
    double n;
    double sum = 0;
    double d = 1;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 1; i<=n; ++i)
    {
        d = pow(2,i);
        sum += d;
    }
    printf("Sum = %.9lf",sum);
    return 0;
}