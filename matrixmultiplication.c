#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    // First Matrix
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("First matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // Second Matrix
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Second matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            c[i][j] = 0;
            for (k = 0;k<3;k++) 
            {
                c[i][j] = c[i][j]+ a[i][k] * b[k][j];
            }
        }
    }

    // Displaying Matrix C (Result)
    printf("Matrix C (Result) is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}