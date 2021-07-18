//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
#include<stdio.h>

int main()
{
    double n;
    double sum = 0;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 1; i<=n; ++i)
    {
        sum += 1/(2*i);
    }
    printf("Sum = %lf",sum);
    return 0;
}