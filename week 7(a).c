#include <stdio.h>

int main() {
    int arr1[50][50], arr2[50][50], arr3[50][50];
    int n, i, j;

    printf("Addition of two Matrices :\n");
    printf("------------------------------\n");

    printf("Input the size of the square matrix: ");
    scanf("%d", &n);

    // Input first matrix
    printf("\nInput elements in the first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second matrix
    printf("\nInput elements in the second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Display first matrix
    printf("\nThe First matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nThe Second matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display sum matrix
    printf("\nThe Addition of two matrices is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

