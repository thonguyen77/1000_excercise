//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
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
        d *= i;
        sum += d;
    }
    printf("Sum = %.9lf",sum);
    return 0;
}