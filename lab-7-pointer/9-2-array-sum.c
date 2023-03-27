#include<stdio.h>
#include<stdlib.h>

int rows, cols;

void ArraySum(int **pt1, int **pt2)
{
    printf("Matrix1 + Matrix2 = \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", pt1[i][j]+pt2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // 1st matrix allocation
    int **matrix1 = (int **) malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
    {
        matrix1[i] = (int *) malloc(cols * sizeof(int));
    }
    // printing 1st matrix
    printf("Enter the elements of the 1st matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 2nd matrix memory allocation
    int **matrix2 = (int **) malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
    {
        matrix2[i] = (int *) malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the 2nd matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }


    ArraySum(matrix1, matrix2);

}

/*

1 2
3 4

4 5
6 7

*/
