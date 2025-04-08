#include <stdio.h>

int findMajorityElement(int arr[], int size) {
    int count = 0, candidate = -1;

    // Phase 1: Find a potential candidate
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
    scanf("%d", &size);

    if (size <= 0) {
        printf("-1\n"); // optional: handle invalid input
        return 0;
    }

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMajorityElement(arr, size);
    if (result != -1) {
        printf("Majority Element: %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
