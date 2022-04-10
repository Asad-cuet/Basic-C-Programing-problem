#include<stdio.h>

void main()
{
    int mat1[2][3]={{1,2,3},{4,5,6,}};
    int mat2[2][3]={{9,8,7},{5,4,3}};

    int i,j,sum[3][3];

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
