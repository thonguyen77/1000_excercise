//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    for(int i = 0; i<=n; ++i)
    {
        sum +=i;
    }
    printf("Sum = %d",sum);
    return 0;
}