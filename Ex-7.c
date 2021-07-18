//Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
#include<stdio.h>

int main()
{
    double n;
    double sum = 0;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 1; i<=n; ++i)
    {
        sum += i/(i+1);
    }
    printf("Sum = %.9lf",sum);
    return 0;
}