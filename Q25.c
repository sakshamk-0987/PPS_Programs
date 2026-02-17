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
    printf("Array before sorting");
    for(int i =0;i<n;i++)
    {
        printf("\n%d",num[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("\nArray after sorting");
    for(int i =0;i<n;i++)
    {
        printf("\n%d",num[i]);
    }
}