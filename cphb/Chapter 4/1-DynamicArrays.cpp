#include <bits/stdc++.h>

using namespace std;

int main() {
	//dynamic array is an array who's size can be changed during execution
	// below is vetor structure dynamic array
	vector<int> v;
	v.push_back(3); // [3]
	v.push_back(2); // [3,2]
	v.push_back(5); // [3,2,5]

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	//shorter way to iterate through a vector
	for (auto x : v){
		cout << x << "\n";
	}

	//.back() ruturns the last element, pop_back() removes the last element
	cout << v.back() << "\n";
	v.pop_back();
	cout << v.back() << "\n";

	//other ways to create a vector
	vector<int> v1 = {2,4,2,5,1};

	//set size and give initial value
	// size 11, initial value 0
	vector<int> v2(11);

	//size 11, initial value 7
	vector<int> v3(11, 7);

	// a string is also a dynamic array
	string a = "hatti";
	string b = a + a;
	cout << b << "\n";
	b[5] = 'v';
	cout << b << "\n";
	string c = b.substr(3,4);
	cout << c << "\n";
}
