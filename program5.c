#include<stdio.h>

int main()
{
    int A;

    printf("Enter a Number: ");
    A = fact();
    printf("\nFactorial = %d ",A);
    return 0;
}
int fact()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
