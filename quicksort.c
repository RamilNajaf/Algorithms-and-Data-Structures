#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void quick_sort(int l, int r, int *arr);
int get_rand(int l, int r);
void swap(int *ptr1, int *ptr2);
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int*) malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    quick_sort(0, n-1, arr);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}
void quick_sort(int l, int r, int *arr) {
    if (l < r) {
        int pivot = get_rand(l, r);
        swap(arr + pivot, arr + r);
        int pos = l;
        for (int i = l; i < r; i++) {
            if (arr[i] < arr[r]) {
                swap(arr + pos, arr + i);
                pos++;
            }
        }
        swap(arr + pos, arr + r);
        quick_sort(l, pos - 1, arr);
        while (pos < r && arr[pos] == arr[pos+1]) {
            pos++;
        }
        quick_sort(pos + 1, r, arr);
    }
}
int get_rand(int l, int r) {
    srand(time(NULL));
    return rand()%(r-l+1) + l;
}
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}