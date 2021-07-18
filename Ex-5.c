//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
#include<stdio.h>

int main()
{
    double n;
    double sum = 0;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 0; i<=n; ++i)
    {
        sum += 1/(2*i+1);
    }
    printf("Sum = %lf",sum);
    return 0;
}