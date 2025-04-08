#include <stdio.h>

int findMajorityElement(int arr[], int size) {
    int count = 0, candidate = -1;

    // Phase 1: Find a candidate
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > size / 2) ? candidate : -1;
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findMajorityElement(arr, size);

    return 0;
}
