#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int sum_even=0;
    int sum_odd=0;
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            sum_even=sum_even+i;
        }
        else
        {
            sum_odd=sum_odd+i;
        }
    }
    printf("Sum of first %d even numbers is %d\n",a,sum_even);
    printf("Sum of first %d odd numbers is %d",a,sum_odd);
}