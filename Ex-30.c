#include<stdio.h>
#include<math.h>

int main()
{
    int n = 8128;
    //int cnt = 0;
    int sum = 0;
    //int mul = 1;
    //printf("Enter n = ");
    //scanf("%d",&n);

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum +=i;
        }
    }
    if(sum == n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    //printf("\n%d ",mul);
    return 0;
}