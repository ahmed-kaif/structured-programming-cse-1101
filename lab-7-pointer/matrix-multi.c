#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows1, cols1, rows2, cols2, i, j;


    printf("Enter the number of rows for 1st Matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for 1st Matrix: ");
    scanf("%d", &cols1);

    // 1st matrix allocation
    int **matrix1 = (int **) malloc(rows1 * sizeof(int *));
    for (i = 0; i < rows1; i++)
    {
        matrix1[i] = (int *) malloc(cols1 * sizeof(int));
    }
    // printing 1st matrix
    printf("Enter the elements of the 1st matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows for 2nd Matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for 2nd Matrix: ");
    scanf("%d", &cols2);

    // 2nd matrix memory allocation
    int **matrix2 = (int **) malloc(rows2 * sizeof(int *));
    for (i = 0; i < rows2; i++)
    {
        matrix2[i] = (int *) malloc(cols2 * sizeof(int));
    }

    printf("Enter the elements of the 2nd matrix:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(cols1 != rows2) {
        printf("Multiplication is not possible between Matrix1 & Matrix2 due to their dimension.\n");
    }


    // result matrix
    int **result = (int **) malloc(rows1 * sizeof(int *));
    for (i = 0; i < rows1; i++)
    {
        result[i] = (int *)malloc(cols2 * sizeof(int));
    }

    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            result[rows1][] =
        }
    }


}

/*

1 2
3 4

4 5
6 7

*/
