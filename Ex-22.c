#include<stdio.h>
#include<math.h>

int main()
{
    int n = 100;
    int mul = 1;
    //printf("Enter n = ");
    //scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            mul *= i;
        }
    }
    printf("%d ",mul);
    return 0;
}