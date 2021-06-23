#include <bits/stdc++.h>

using namespace std;
//this is a common sorting algorithm where if elements are not in order they are swapped.
//You need to go through the loop the lenght of array - 1 to ensure correct positionsing.
//this is a O(n^2)

int main() {
  int array[8] = {1, 3, 8, 2, 9, 2, 5, 6};
  int n = sizeof(array)/sizeof(array[0]);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (array[j] > array[j+1]) {
        swap(array[j], array[j+1]);
      }
    }
  }
  for (int j = 0; j < n - 1; j++) {
    cout << array[j] << ", ";
  }
  cout << "\n";
}
//I found merge and counting sort to be sufficiently explained in the book and
//because there was no code example there is nothing left to do
//here is a video I found on the interwebs relating ot merge-sort https://youtu.be/XaqR3G_NVoo
