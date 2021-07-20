#include<stdio.h>
#include<math.h>

int main()
{
    double n,x;
    double sum = 1;
    double d = 1;
    printf("Enter x = ");
    scanf("%lf",&x);
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 2; i<=2*n; i+=2)
    {
        d *= (i-1)*i;
        sum += pow(x,i)/d;
    }
    printf("Sum = %.9lf",sum);
    return 0;
}