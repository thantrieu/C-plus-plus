#include "pch.h" // su dung trong visual studio 2017 ++
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int giaiThua = 1;
	if (n > 0) {
		for (size_t i = n; i >= 1; i--)
		{
			giaiThua *= i;
		}
	}

	if (n < 0) {
		cout << "Nhap lai n >= 0!";
	}
	else {
		cout << n << "! = " << giaiThua << endl;

	}
	return 0;
}