#include <stdio.h>

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    printf("\nMatrix A has %d rows and %d columns.\n", r1, c1);
    printf("Matrix B has %d rows and %d columns.\n", r2, c2);

   
    printf("\nMatrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++)
            printf("%4d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++)
            printf("%4d ", B[i][j]);
        printf("\n");
    }


    if (c1 != r2) {
        printf("\nMatrix multiplication not possible: Columns of A (%d) ≠ Rows of B (%d).\n", c1, r2);
        return 0;
    }

    int result[r1][c2];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }

  
    printf("\nProduct of A and B:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%4d ", result[i][j]);
        printf("\n");
    }

 
    int sum = 0;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            sum += A[i][j];

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            sum += B[i][j];

    printf("\nSum of all elements in A and B: %d\n", sum);

    return 0;
}