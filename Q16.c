#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int c=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}