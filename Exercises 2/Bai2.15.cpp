#include "pch.h" // su dung trong visual studio 2017 ++
#include <iostream>

using namespace std;

int main() {
	long long n;
	cout << "Nhap so n: ";
	cin >> n;
	
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}

	cout << "SUM = " << sum << endl;

	return 0;
}