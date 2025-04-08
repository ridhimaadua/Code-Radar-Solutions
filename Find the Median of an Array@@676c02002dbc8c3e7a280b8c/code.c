#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n); // Read size of array

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Calculate and print median
    if (n % 2 == 1) {
        // Odd size: middle element
        printf("%d\n", arr[n / 2]);
    } else {
        // Even size: average of two middle elements
        int median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        printf("%d\n", median);
    }

    return 0;
}

27
