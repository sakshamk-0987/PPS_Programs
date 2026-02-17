#include<stdio.h>
#include <math.h>
int main()
{
    printf("Enter 1 for Binary to Decimal and 2 for Decimal to Binary\n");
    int n;
    scanf("%d",&n);
    if (n==1)
    {
        printf("Input the Binary number \n");
        int num;
        scanf("%d",&num);
        int i=0,sum=0;
        while(num>0)
        {
            int d=num%10;
            int a= (d*pow(2,i));
            sum = sum+a;
            i=i+1;
            num=num/10;
        }
        printf("Number in decimal = %d ",sum);
    }
    else if (n==2)
    {
        int n,binary=0,place=1,rem;
        printf("Input the Decimal number \n");
        scanf("%d",&n);
        while (n>0)
        {
            rem=n%2;
            binary=binary+rem*place;
            place=place*10;
            n=n/2;
        }
        printf("Binary %d",binary);
    }   
}