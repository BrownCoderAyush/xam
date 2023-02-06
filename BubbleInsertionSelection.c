#include<stdio.h>

void selection_sort(int arr[], int n) {

  int i,j;
  for (i = 0; i < n - 1; i++) {
    int mini = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }


}

void bubble_Sort(int arr[] ,int n ){

  for(int i = 1 ; i < n ; i++){
    for(int j = 0 ; j < n - i ; j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

}

void insertion_sort(int arr[], int n) {
  // insertion sort
  for (int i = 1; i < n; i++) {
    int current = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > current) {
      //swap
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }
}

int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");

  selection_sort(arr, n);
  bubble_Sort(arr , n);

  for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }

  return 0;
}