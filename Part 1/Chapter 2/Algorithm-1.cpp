//refer time-complexity.txt for the question
#include <bits/stdc++.h>

using namespace std;

//this solution involves going through all possible subarrays using 3 nested for loops
int main() {
  int best = 0;
  int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = sizeof(array)/sizeof(array[0]);

  for (int a = 0; a < n; a ++) {
    for (int b = a; b < n; b++) {
      int sum = 0;
      for (int k = a; k <= b; k++) {
        sum += array[k];
      }
      best = max(best,sum);
    }
  }

  cout << best << "\n";
}

//the 3 nested for loops mean this runs at O(n^3)
