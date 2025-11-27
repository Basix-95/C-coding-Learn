/*WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.*/
#include <stdio.h>

#define MAX 10

void readMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
}

void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%4d", mat[i][j]);
        printf("\n");
    }
}

void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n, int p, int q) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int determinant2x2(int mat[MAX][MAX]) {
    return mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
}

int determinant3x3(int mat[MAX][MAX]) {
    int det = 0;
    det += mat[0][0]*(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]);
    det -= mat[0][1]*(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]);
    det += mat[0][2]*(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
    return det;
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], Sum[MAX][MAX], Product[MAX][MAX];
    int m, n, p, q;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of Matrix A (row-major order):\n");
    readMatrix(A, m, n);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    printf("Enter elements of Matrix B (row-major order):\n");
    readMatrix(B, p, q);

    printf("\nMatrix A:\n");
    printMatrix(A, m, n);

    printf("\nMatrix B:\n");
    printMatrix(B, p, q);

    if (m == p && n == q) {
        addMatrices(A, B, Sum, m, n);
        printf("\nSum of A and B:\n");
        printMatrix(Sum, m, n);
    } else {
        printf("\nSum not possible: Matrices must be of same dimensions.\n");
    }

    if (n == p) {
        multiplyMatrices(A, B, Product, m, n, p, q);
        printf("\nProduct of A and B:\n");
        printMatrix(Product, m, q);
    } else {
        printf("\nMultiplication not possible: Columns of A must equal rows of B.\n");
    }

    if (m == n && (m == 2 || m == 3)) {
        int detA = (m == 2) ? determinant2x2(A) : determinant3x3(A);
        printf("\nDeterminant of Matrix A: %d\n", detA);
    } else {
        printf("\nDeterminant of Matrix A not computable: Must be 2x2 or 3x3.\n");
    }

    if (p == q && (p == 2 || p == 3)) {
        int detB = (p == 2) ? determinant2x2(B) : determinant3x3(B);
        printf("Determinant of Matrix B: %d\n", detB);
    } else {
        printf("Determinant of Matrix B not computable: Must be 2x2 or 3x3.\n");
    }

    return 0;
}