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

    for(double i = 1; i<=2*n-1; i+=2)
    {
        if(i>1)
        {
            d *= (i-1)*i;
        }
        sum += pow(x,i)/d;
    }
    printf("Sum = %.9lf",sum);
    return 0;
}