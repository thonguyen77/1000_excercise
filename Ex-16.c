#include<stdio.h>
#include<math.h>

int main()
{
    double n,x;
    double sum = 0;
    double d = 0;
    printf("Enter x = ");
    scanf("%lf",&x);
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 1; i<=n; ++i)
    {
        d += i;
        sum += pow(x,i)/d;
    }
    printf("Sum = %.9lf",sum);
    return 0;
}