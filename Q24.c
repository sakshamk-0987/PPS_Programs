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
    printf("Input the number to be searched in the array");
    int target;
    scanf("%d",&target);
    for(int i =0;i<n;i++)
    {
        if(num[i]==target)
        {
            printf("Number found at index %d",i);
            return 0;
        }
    }   
    printf("Number not found");
}