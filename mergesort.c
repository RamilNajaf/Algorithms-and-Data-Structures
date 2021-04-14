#include <stdio.h>
void merge_sort(int l, int r, int arr[]);
void merge(int l, int r, int arr[]);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    merge_sort(0, n-1, arr);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
void merge_sort(int l, int r, int arr[]) {
    if (l < r) {
        int mid = (l+r)/2;
        merge_sort(l, mid, arr);
        merge_sort(mid+1, r, arr);
        merge(l, r, arr);
    }
}
void merge(int l, int r, int arr[]) {
    int mid = (l+r)/2;
    int l_s = mid - l + 1;
    int r_s = r - mid;
    int L[l_s], R[r_s];
    for (int k = 0; k < l_s; k++) {
        L[k] = arr[l+k];
    }
    for (int k = 0; k < r_s; k++) {
        R[k] = arr[mid+1+k];
    }
    int i, j;
    i = j = 0;
    for (int k = l; k <= r; k++) {
        if (i == l_s) {
            arr[k] = R[j];
            j++;
        } else if (j == r_s) {
            arr[k] = L[i];
            i++;
        } else if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}