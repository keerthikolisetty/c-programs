#include <stdio.h>

int main() {
    int r, i, j, sum = 0;

    printf("Enter the number of rows/columns of a square matrix: ");
    scanf("%d", &r);

    int a[50][50];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate trace (sum of diagonal elements)
    for (i = 0; i < r; i++) {
        sum += a[i][i];
    }

    printf("Trace of the matrix: %d\n", sum);

    return 0;
}

