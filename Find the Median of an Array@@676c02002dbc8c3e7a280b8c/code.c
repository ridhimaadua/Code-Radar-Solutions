// Your code here...#include <stdio.h>
#include <stdio.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

float findMedian(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare);  // Sort the array

    if (size % 2 == 0) {
        return (arr[size/2 - 1] + arr[size/2]) / 2.0;
    } else {
        return arr[size/2];
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("-1\n");  // Handle invalid size
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float median = findMedian(arr, n);
    printf("Median: %.2f\n", median);
    return 0;
}
