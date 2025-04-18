#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[1000]; // assuming max size is 1000

    // ✅ Take input for array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
