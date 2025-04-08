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
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; // Variable-length array (C99)

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMajorityElement(arr, size);
    if (result != -1)
        printf("Majority Element: %d\n", result);
    else
        printf("No Majority Element found.\n");

    return 0;
}
