#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#pragma warning(disable:4996)

using namespace std;

int main() {
	//Prime number
	int n;
	bool prime = true;
	cout << "Number:";
	cin >> n;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			prime = false;
			break;
		}
	}
	prime ? cout << "Prime number" : cout << "Not a prime number";
}