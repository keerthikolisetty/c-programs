#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];   

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}

