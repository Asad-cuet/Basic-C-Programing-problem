#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n],sum[n][n];
    int i,j;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }



    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
