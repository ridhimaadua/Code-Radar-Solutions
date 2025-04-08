// Your code here...#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[1000]; // max array size
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter K (number of steps to rotate): ");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the rest
    reverse(arr, k, n - 1);

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
