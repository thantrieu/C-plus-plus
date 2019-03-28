#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int n;
	long sum = 0, sum1 = 0, sum2 = 0;

	cout << "Nhap gia tri so tu nhien n: ";
	cin >> n;

	if (n >= 0) {
		for (size_t i = 0; i < n; i++)
		{
			sum += i;
			if (i % 2 == 0) {
				sum2 += i;
			}
			else {
				sum1 += i;
			}
		}

		cout << "S = " << sum << endl;
		cout << "S1 = " << sum1 << endl;
		cout << "S2 = " << sum2 << endl;
	}
	else {
		cout << "Hay nhap so tu nhien n!";
	}
	return 0;
}