#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int a, b;
	int tich = 1;

	cout << "Nhap vao hai so duong a, b: ";
	cin >> a >> b;

	if (a > 0 && b > 0) {
		tich = a * b;

		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}

		cout << "UCLN = " << a << endl;
		cout << "BCNN = " << tich / a << endl;
	}
	else {
		cout << "Vui long nhap so nguyen duong a, b";
	}

	return 0;
}