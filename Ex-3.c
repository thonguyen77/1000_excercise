//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
#include<stdio.h>

int main()
{
    double n;
    double sum = 0;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 1; i<=n; ++i)
    {
        sum += 1/i;
    }
    printf("Sum = %lf",sum);
    return 0;
}