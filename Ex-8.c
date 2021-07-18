//Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include<stdio.h>

int main()
{
    double n;
    double sum = 0;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 0; i<=n; ++i)
    {
        sum += (2*i+1)/(2*i+2);
    }
    printf("Sum = %.9lf",sum);
    return 0;
}