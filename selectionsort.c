#include <stdio.h>
int main() {
  int n;
  int min;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
       min=i;
        for (int j = i+1; j< n; j++) {
            if(arr[j]<arr[min]){
               min=j;
            }
         
        }
      int temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
    }


    
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
}