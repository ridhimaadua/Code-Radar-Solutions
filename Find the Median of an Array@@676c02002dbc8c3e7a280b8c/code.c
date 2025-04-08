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

    // Take input size
    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
