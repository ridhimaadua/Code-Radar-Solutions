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

 
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];  // Variable length array (C99 or later)


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMajorityElement(arr, n);

    
        

    return 0;
}
