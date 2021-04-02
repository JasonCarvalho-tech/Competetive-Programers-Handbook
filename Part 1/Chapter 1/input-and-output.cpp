#include <bits/stdc++.h>

using namespace std;

int main() {
	//optional see line 18
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int a, b;
	string x;
	//reading from cin stream
	cin >> a >> b >> x;

	//cout stream for output
	cout << a << " " << b << " " << x << "\n";

	//the lines
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	//can be used to speed up the program see https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull for how they work
	
	//these C alternatives are faster but difficult to use
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);

	//reading a whole line of text that might have spaces
	string s;
	cin.ignore(); 	//this line is used becuase newline character left from the input streat at line 25
					//see: https://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs
	getline(cin, s);
	cout << s << "\n";

	//this loop continuously reads and outputs data
	//commented because it is infinite
	//while (cin >> x) {
		//cout << x << "\n";
	//}
}
