#include<stdio.h>
#include<math.h>

int main()
{
    int n = 21;
    int cnt = 0;
    //int sum = 0;
    //int mul = 1;
    //printf("Enter n = ");
    //scanf("%d",&n);

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cnt++;
        }
    }
    if(!cnt)
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