//refer time-complexity.txt for the question
#include <bits/stdc++.h>

using namespace std;

//this one is a bit more complex
//instead of using the third loop to calculate the total we do that in the second loop itself
//I was confused for a bit but then realized the only thing we need is the largest subarray sum we don't need the positions where the sum was calculated so this is fine.
int main() {
  int best = 0;
  int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = sizeof(array)/sizeof(array[0]);

  for (int a = 0; a < n; a++) {
    int sum = 0;
    for (int b = a; b < n; b++) {
      sum += array[b];
      best = max(best, sum);
    }
  }
  cout << best << "\n";
}
//since this only uses two loops the complexity is O(n^2)
