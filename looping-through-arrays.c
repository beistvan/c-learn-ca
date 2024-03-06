#include <stdio.h>

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];
    
  // Code for Checkpoint 1 goes here
  int i = 0;
  while(i < 20){
  // arr[i] accesses element at index i in the array arr.
    printf("%d\n", arr[i]);
    i++;
  }  
  // Code for Checkpoint 2 goes here
  for(i = 0; i < 100; i++){
  // arr[i] accesses element at index i in the array arr.
    arr2[i] = 4 + i;
  }
}
