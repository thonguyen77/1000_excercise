#include<stdio.h>
#include<math.h>

int main()
{
    int n = 16;
    //int cnt = 0;
    //int sum = 0;
    //int mul = 1;
    //printf("Enter n = ");
    //scanf("%d",&n);

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(i*i == n)
        {
            printf("%d",i);
            break;
        }
    }
    //printf("\n%d ",mul);
    return 0;
}