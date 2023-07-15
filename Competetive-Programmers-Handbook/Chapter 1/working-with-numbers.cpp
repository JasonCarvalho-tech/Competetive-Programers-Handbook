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

	//if the answer is expected to be even greater than long long, competetions ask for answers to be in "modulo m"
	//see https://www.geeksforgeeks.org/modulo-1097-1000000007/ for the reasons why ect.
	
	float c = 0.12123; //32 bits 
	double d = 0.1212233445; //64 bits but can be 32 bits
	long double e = 0.1212334556734512334; //80 bits can be 32 bits

	printf("%.9f\n", d); //displaying number to 9 decimal places, can't display long double
	cout << setprecision(17) << e << "\n"; //display but with cout can display long double, unsure of efficiency

	//some numbers cannot be accurately represented as floating poits and there might be rounding errors
	double f = 0.3*3+0.1;
	printf("%.20f\n", f); //output is 0.999999999999999888898 when it should be 1
	//beacuse of this it is risky to compare floating numbers with "=="
	//better practice would be to assume two numbers are equal if the difference between them is a very small number
	//for instance if the number is 10^-9
	double g = 1;
	if(abs(f-g) < 1e-9) {
		//a and b are equal
		cout << "a and b are equal \n";
	}
}
