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

void transpose_matrix(int mat[][MAX_COLS], int transp[][MAX_ROWS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transp[j][i] = mat[i][j];
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

void print_transpose(int mat[][MAX_COLS], int transp[][MAX_ROWS], int rows, int cols) {
    int i, j;
    printf("Transpose of matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transp[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[MAX_ROWS][MAX_COLS], transp[MAX_COLS][MAX_ROWS];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    read_matrix(mat, rows, cols);
    transpose_matrix(mat, transp, rows, cols);
    print_matrix(mat, rows, cols);
    print_transpose(mat, transp, rows, cols);

    return 0;
}
