// Your code here...#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
   
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[1000];  // Assuming max array size is 1000
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int minDiff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];

    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i+1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            pair1 = arr[i];
            pair2 = arr[i+1];
        }
    }

    // Output in ascending order
    if (pair1 < pair2)
        printf("Pair with
