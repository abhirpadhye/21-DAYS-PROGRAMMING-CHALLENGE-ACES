/*So today i saw some algorithms     
I learnt about the theory of 2 algos 
1) Binary search
2) Linear search

Linear search was direct but I found binary search a bit complicated so i just wrote out the program for it...

*/



#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    
    if (array[mid] == x)
      return mid;

    
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
