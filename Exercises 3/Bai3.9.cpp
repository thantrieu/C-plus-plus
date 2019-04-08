#include <iostream>
#include <cmath>
using namespace std;

bool laSoNguyenTo(int n) {
	if (n < 2) {
		return false;
	}

	for (size_t i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

void lietKeUocNguyenTo(int n) {
	if (n == 0) {
		cout << "Co vo so uoc nguyen to\n";
	}
	else {
		cout << "\nCAC UOC NGUYEN TO: \n";
		for (size_t i = 2; i <= n; i++)
		{
			if (n % i == 0 && laSoNguyenTo(i)) {
				cout << i << " ";
			}
		}
	}
}

void lietKeUocKoNguyenTo(int n) {
	if (n == 0) {
		cout << "Co vo so uoc khong nguyen to\n";
	}
	else {
		cout << "\nCAC UOC KHONG NGUYEN TO: \n";
		for (size_t i = 2; i <= n; i++)
		{
			if (n % i == 0 && laSoNguyenTo(i) == false) {
				cout << i << " ";
			}
		}
	}
}

int main() {
	int n;
	cout << "Nhap vao gia tri duong n: ";
	cin >> n;
	if (n < 0) {
		cout << "Nhap lai so duong n!";
	}
	else {
		lietKeUocKoNguyenTo(n);
		lietKeUocNguyenTo(n);
	}
	return 0;
}