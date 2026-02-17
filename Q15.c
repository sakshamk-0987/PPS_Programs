#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=0,b=1;
    printf("Fibonacci series up to %d terms: ",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        int next=a+b;
        a=b;
        b=next;
    }
}