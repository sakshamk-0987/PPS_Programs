#include<stdio.h>
int main()
{
    printf("Input the size of the array \n");
    int n;
    scanf("%d",&n);
    int num1[n];
    printf("Input the elements of the first array");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num1[i]);
    }
    int num2[n];
    printf("Input the elements of the second array");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num2[i]);
    }
    int sum[n];
    for(int i=0;i<n;i++)
    {
        sum[i]=num1[i]+num2[i];
    }
    for(int i =0;i<n;i++)
    {
        printf("\n%d",sum[i]);
    }
}