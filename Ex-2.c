//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include<stdio.h>
#include<math.h>
int main()
{
    double sum = 0;
    double n;
    printf("Enter n = ");
    scanf("%lf",&n);
    for(double i = 1; i<=n; ++i)
    {
        sum += pow(i,2);
    }
    printf("Sum = %lf",sum);
    return 0;
}