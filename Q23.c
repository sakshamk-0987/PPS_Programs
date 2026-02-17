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
    int max=-1,min=__INT_MAX__;
    for(int i =0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    printf("Largest number %d\n",max);
    printf("Smallest number %d",min);
}