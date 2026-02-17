#include<stdio.h>
int main()
{
    printf("Armstrong numbers between 1 and 100 are: ");
    for(int i=1;i<=100;i++)
    {
        int temp=i;
        int sum=0;
        while(temp>0)
        {
            int d=temp%10;
            sum=sum+d*d*d;
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}