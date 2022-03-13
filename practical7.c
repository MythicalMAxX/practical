#include<stdio.h>

int sum = 0;
int add(int n)
{
    int r;

    if(n==0)
      return sum;
    else
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        add(n);
    }
}

 int main()
 {
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Sum = %d",add(n));
    return 0;
 }
