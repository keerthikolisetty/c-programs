#include <stdio.h>

int main() {
    int r, i, j;

    printf("Enter the number of rows/columns of square matrix: ");
    scanf("%d", &r);

    int a[50][50];

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int is_lower_triangular = 1;

    // Checking lower triangular condition
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {  
            if (a[i][j] != 0) {
                is_lower_triangular = 0;
                break;
            }
        }
        if (!is_lower_triangular)
            break;
    }

    if (is_lower_triangular)
        printf("Given Matrix is a Lower Triangular Matrix\n");
    else
        printf("Given Matrix is NOT a Lower Triangular Matrix\n");

    return 0;
}

