//refer time-complexity.txt for the question
#include <bits/stdc++.h>

using namespace std;

//this time its solved in just one loop
int main() {
  int best = 0; int sum = 0;
  int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = sizeof(array)/sizeof(array[0]);

  //logic here is that the largest sum of the sub array is either
  //all elements + k
  //or just k
  //we take that and compare it with the best sum we recieved to get the maximum sum
  for (int k = 0; k < n; k++) {
    sum = max(array[k], sum+array[k]);
    best = max(best, sum);
  }

  cout << best << "\n";
}
