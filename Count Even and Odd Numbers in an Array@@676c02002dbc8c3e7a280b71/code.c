
  #include <stdio.h>
  int main() {
    int arr[100], n, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("%d ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf(" %d", even);
    printf(" %d", odd);
     return 0;
}

