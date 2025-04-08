#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int count = 0, candidate = -1;

    // Phase 1: Find potential candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Confirm candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];  // Variable length array (C99 or later)

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMajorityElement(arr, n);

    if (result == -1)
        printf("No Majority Element found.\n");
    else
        printf("Majority Element: %d\n", result);

    return 0;
}
