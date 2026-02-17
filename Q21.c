#include<stdio.h>
int main()
{
    printf("Input the size of the array \n");
    int n;
    scanf("%d",&n);
    int num[n];
    printf("Input the elements of the array");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum +num[i];
    }
    printf("Sum of all the elements of the array %d",sum);
}