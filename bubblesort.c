#include <stdio.h>
int main() {
  int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            count++;
        }
    }

    printf("%d\n ", count);
    
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
}