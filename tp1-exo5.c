#include <stdio.h>
#include <stdlib.h>

void sortTest(int arr[], int size){
      for(int i=0; i<size-1; i++){
            if(arr[i]>arr[i+1]){
                  printf("Array not sorted\n");
                  return;
                }
              }
            printf("The Array is sorted\n");
          }
      
      int main(){
              int size;
              printf("Enter the size of your array: ");
              scanf("%d", &size);
              
              int arr[size];
              for(int i=0; i<size; i++){
                  printf("Enter element %d:\n", i+1);
                  scanf("%d", &arr[i]);
                }
                
              sortTest(arr, size);
              
              return 0;
            }
