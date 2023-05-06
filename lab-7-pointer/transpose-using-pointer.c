#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;

    // Prompt the user to enter the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrix
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // Prompt the user to enter the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the original matrix
    printf("The original matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the transpose of the matrix
    int **transpose = (int **)malloc(cols * sizeof(int *));
    for (i = 0; i < cols; i++) {
        transpose[i] = (int *)malloc(rows * sizeof(int));
    }
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Print the transpose of the matrix
    printf("The transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Free the memory allocated for the matrices
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    for (i = 0; i < cols; i++) {
        free(transpose[i]);
    }
    free(transpose);

    return 0;
}
