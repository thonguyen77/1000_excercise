//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
#include<stdio.h>

int main()
{
    double n;
    double sum = 0;
    printf("Enter n = ");
    scanf("%lf",&n);

    for(double i = 1; i<=n; ++i)
    {
        sum += 1/(i*(i+1));
    }
    printf("Sum = %lf",sum);
    return 0;
}