#include<stdio.h>

void main()
{
    int row1,col1,row2,col2;
    up :
    printf("\nEnter 1st matrix dimension=");
    scanf("%d %d",&row1,&col1);

    printf("\nEnter 2nd matrix dimension=");
    scanf("%d %d",&row2,&col2);

    if(col1!=row2)
    {
        printf("\nNot multiplicable.Try again:");
        goto up;
    }

    int i,j,k,sum;
    int mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];

    //Matrix 1 Input
    printf("Input matrix 1:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    //Matrix 2 Input
    printf("Input matrix 2:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }



    //Multiplication Logic
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            sum=0;
            for(k=0;k<row2;k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            mat3[i][j]=sum;
        }
    }

    //1st matrix
    printf("\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Result
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}
