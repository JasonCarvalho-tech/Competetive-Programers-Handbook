#include <bits/stdc++.h>

using namespace std;

int main() {
  int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int n = sizeof(array)/sizeof(array[0]);
  int x = 3;
  //general method for searching.
  for (int i = 0; i < n; i++) {
    if (array[i] == x) {
      cout << "element found at " << i << "\n";
    }
  }

  //like looking for word in dictionary (splitting in half and search relevant half)
  //this is O(log n)
  int a = 0, b = n-1;
  while (a<=b) {
    int k = (a+b)/2;
    if (array[k] == x) {
      cout << "element found at " << k << "\n";
    }
    if (array[k] > x) b = k-1;
    else a = k+1;
  }

  //jumping and slowing jump rate the closer we get
  int k = 0;
  for (int b = n/2; b >= 1; b /= 2){
    while (k+b < n && array[k+b]) k += b;
  }
  if (array[k] == x) {
    cout << "element found at " << k << "\n";
  }

  //C++ standard library functions
  int array2[8] = {1, 2, 3, 3, 5, 6, 7, 8};
  auto l = lower_bound(array, array+n, x) - array;
  if(l < n && array2[l] == x) {
    cout << "element found at " << l << "\n";
  }
  //counting the number of elements whose value is x
  auto m = lower_bound(array2, array2+n, x);
  auto o = upper_bound(array2, array2+n, x);
  cout << o - m << "\n";
  //same as above but shorter
  auto r = equal_range(array2, array2+n, x);
  cout << r.second - r.first << "\n";
}
