#include<stdio.h>
#include<math.h>

int main()
{
    int n = 100;
    int cnt = 0;
    //printf("Enter n = ");
    //scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i % 2 != 0)
            {
                printf("%d ",i);
            }
        }
    }
    //printf("%d ",cnt);
    return 0;
}