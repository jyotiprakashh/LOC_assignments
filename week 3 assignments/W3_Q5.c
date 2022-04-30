#include <stdio.h>
int largestnum(int arr[], int n){
    
 
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d", arr[0]);

}
int main() {
  int n;
  int arr[100];
  printf("Enter the number of elements in array :");
  scanf("%d", &n);
  printf("Enter the elements in array\n ");
  
  for (int i = 0; i < n; ++i) {
   
    scanf("%d", &arr[i]);
  }
 largestnum(arr,n);
  return 0;
}
