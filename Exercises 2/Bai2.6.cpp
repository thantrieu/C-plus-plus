#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int n, k;
	long sum = 0;

	cout << "Nhap gia tri so tu nhien n, k: ";
	cin >> n >> k;

	if (n >= 0 && k > 0) {
		for (size_t i = 1; i < n; i++)
		{
			if (i % k == 0) {
				sum += i;
			}
		}

		cout << "SUM = " << sum << endl;
	}
	else {
		cout << "Vui long nhap so tu nhien n >= 0 va k > 0";
	}

	return 0;
}