#include <stdio.h>

int findMajorityElement(int arr[], int size) {
    int count = 0, candidate = -1;

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

    int arr[size]; 

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
