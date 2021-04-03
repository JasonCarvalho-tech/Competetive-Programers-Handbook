#include <bits/stdc++.h>

using namespace std;

int main() {
	int y = 123; //32 bit type integer
	long long x = 123456789123456789LL; //64 bit integer not the LL suffix which indicates number is long long

	//you cannot use int and long long together
	int a = 123456789;
	long long b = a*a;
	cout << b << "\n"; // -1757895751

	//to fix you can either make a long long or using (long long)
	b = (long long)a*a;
	cout << b <<"\n";
}
