#include "pch.h"
#include <cmath>
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n < 2) {
		cout << "Khong phai so nguyen to!" << endl;
	}
	else
	{
		for (size_t i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) {
				cout << "Khong phai so nguyen to!" << endl;
				return 0;
			}
		}
		cout << "La so nguyen to!" << endl;
	}

	return 0;
}