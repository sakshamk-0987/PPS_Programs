#include<stdio.h>
int main()
{
    printf("Input the size of the array \n");
    int n;
    scanf("%d", &n);
    int num1[n][n];
    printf("Input the first array \n");
    for(int i =0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&num1[i][j]);
        }
    }
    int num2[n][n];
    printf("Input the second array \n");
    for(int i =0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&num2[i][j]);
        }
    }
    int sum[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=num1[i][j]+num2[i][j];
        }
    }
    printf("Sum of both the array\n");
    for(int i=0;i<n;i++)
    {;
        for(int j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    int mul[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<n;k++)
            {
                mul[i][j]+=num1[i][k]*num2[k][j];
            }
        }
    }
    printf("Multplication of matrix \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}