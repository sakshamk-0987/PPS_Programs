#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev=0;
    while(n>0)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reversed number is %d",rev);
}