#include <iostream>

using namespace std;

// Pythagorean Triples
// Codeforce problem 707C - 1500
// Math heavy

int main() {
	long long int n;
	long long int a;
	long long int b;
	cin >> n;
	if (n < 3) {
		cout << -1;
	}
	if (n % 2 == 1) {
		b = (n*n - 1) / 2;
		a = 1 + b;
	} else if (n % 2 == 0){
		b = ((n*n / 2) - 2) / 2;
		a = 2 + b;
	}
	cout << a << " " << b;
}
