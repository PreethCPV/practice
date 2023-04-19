#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void read_matrix(int mat[][MAX_COLS], int rows, int cols) {
    int i, j;
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiply_matrices(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int prod[][MAX_COLS], int rows1, int cols1, int cols2) {
    int i, j, k;
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void print_matrix(int mat[][MAX_COLS], int rows, int cols) {
    int i, j;
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], prod[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Error: Cannot multiply matrices with given dimensions.\n");
        return 1;
    }

    read_matrix(mat1, rows1, cols1);
    read_matrix(mat2, rows2, cols2);
    multiply_matrices(mat1, mat2, prod, rows1, cols1, cols2);
    print_matrix(mat1, rows1, cols1);
    printf("\n");
    print_matrix(mat2, rows2, cols2);
    printf("\n");
    print_matrix(prod, rows1, cols2);

    return 0;
}
