#include<stdio.h>
int main()
{
    printf("Input the number or rows \n");
    int r;
    scanf("%d",&r);
    printf("Input the number or coloumns \n");
    int c;
    scanf("%d",&c);
    int num[r][c];
    printf("Input the matrix");
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                sum+=num[i][j];
            }
        }
    }
    printf("Sum of diagonal elements is %d",sum);
}