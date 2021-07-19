//Bài 10: Tính T(x, n) = x^n
#include<stdio.h>
#include<math.h>

int main()
{
    double n,T;
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);
    printf("Enter n = ");
    scanf("%lf",&n);

    T = pow(x,n);
    
    printf("Sum = %.9lf",T);
    return 0;
}
