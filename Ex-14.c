//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
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
        d = pow(2,2*i-1);
        sum += d;
    }
    printf("Sum = %.9lf",sum);
    return 0;
}