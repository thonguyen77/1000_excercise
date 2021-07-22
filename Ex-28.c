#include<stdio.h>
#include<math.h>

int main()
{
    int n = 100;
    //int cnt = 0;
    int sum = 0;
    //int mul = 1;
    //printf("Enter n = ");
    //scanf("%d",&n);

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\n%d ",sum);
    return 0;
}