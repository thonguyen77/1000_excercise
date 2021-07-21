#include<stdio.h>
#include<math.h>

int main()
{
    int n = 100;
    //printf("Enter n = ");
    //scanf("%lf",&n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
