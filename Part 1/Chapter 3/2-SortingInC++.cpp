#include <bits/stdc++.h>

using namespace std;

//here I will explore how to use the sort function in C++ as it is faster than writing my own and probably will be faster

//this function is relevant to line 76
bool comp(string a, string b) {
  return a < b;
  if (a.size() != b.size()) return a.size() < b.size();
}

int main() {
  vector<int> v = {4, 2, 5, 3, 5, 8, 3};
  //what is a vector: https://www.geeksforgeeks.org/vector-in-cpp-stl/
  //other link https://en.cppreference.com/w/cpp/container/vector
  int n = v.size();

  sort(v.begin(),v.end());
  //the sort function sorts the elements in range of the first and second paramenters passed in non-ascending order
  //https://en.cppreference.com/w/cpp/algorithm/sort

  //outputing the vector
  for (int i = 0; i < n; i++) {
    cout << v[i] << ", ";
  }
  cout << "\n";

  //this will sort the vector in reverse
  sort(v.rbegin(),v.rend());
  //outputing the vector
  for (int i = 0; i < n; i++) {
    cout << v[i] << ", ";
  }
  cout << "\n";

  //arrays and strings can be sorted out similarrly
  int array[] = {4, 2, 5, 3, 5, 8, 3};
  sort(array,array+(n-1));
  string s = "monke";
  sort(s.begin(), s.end());
  cout << s << "\n";

  //more complicated structures can be used as well
  //using a vector of pairs
  vector<pair<int,int>> w;
  w.push_back({1, 5});
  w.push_back({2, 3});
  w.push_back({1, 2});
  sort(w.begin(), w.end());

  for(int i = 0; i < w.size(); i++) {
    cout << w[i].first << ", " << w[i].second << "\n";
  }

  //struct with custom comparison operator
  //structs are user defined data types and therefore have no comparison operator by default
  struct P {
    int x, y;
    bool operator<(const P &p) {
      if (x != p.x) return x < p.x;
      else return y < p.y;
    }
  };

  P pArray[] = {{1, 3},{1,2}, {2, 0}};
  n = sizeof(pArray)/sizeof(pArray[0]);
  sort(pArray, pArray+n-1);
  for(int i = 0; i < n; i++) {
    cout << "(" << pArray[i].x << ", " << pArray[i].y << ")\n";
  }

  //custom comparison function
  //sort strings by alphabetical order then lenght (opposite order in book)(function in line 72)
  vector<string> vs = {"abs", "aas", "bla", "foo", "bar", "42", "str"};
  sort(vs.begin(), vs.end(), comp);
  for(int i = 0; i < vs.size(); i++) {
    cout << vs[i] << "\n";
  }
}

