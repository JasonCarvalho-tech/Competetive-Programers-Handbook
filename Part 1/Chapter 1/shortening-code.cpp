#include <bits/stdc++.h>

using namespace std;

int main() {
	//we can use typedef to shorten datatypes.
	typedef long long ll; //we used type def to indicate that ll signifies long long
	ll a = 123456789;
	long long b = 987654321;
	cout << a*b << "\n";

	//this can also be used for more complex data types
	typedef vector<int> vi;
	vi vect{10,12,14,151,6};
	for (auto i = vect.begin(); i != vect.end(); ++i) { 
		cout << *i << "\n"; //the star before the i is called a dereferencing operator
	}

	//macros using #define
	#define out cout //whenever we call outcout will be run
	out << a*b << "\n";

	#define REP(i,a,b) for (int i = a; i <= b; i++) //using macros for a for loop
	REP(i,1,5) {
		out << "iteration " << i << "\n";
	}
	
	//Becareful of bugs for instance
	#define SQ(a) a*a
	out << SQ(3+3) << "\n"; //gives output of 15 because 3+3*3+3
	
	//better version
	#define betterSQ(a) (a)*(a)
	cout << betterSQ(3 + 3) << "\n"; //corresponds to (3+3) * (3+3)
}
