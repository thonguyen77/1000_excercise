#include<stdio.h>
#include<math.h>

int main()
{
    int n = 99;
    //int cnt = 0;
    //int sum = 0;
    //int mul = 1;
    int max = 0;
    //printf("Enter n = ");
    //scanf("%d",&n);

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            if(i % 2 != 0)
            {
                max = i;
                printf("%d ",i);
                if(max <= i)
                {
                    max = i;
                }
            }
        }
    }
    printf("\n%d ",max);
    return 0;
}