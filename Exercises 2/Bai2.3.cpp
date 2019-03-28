#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Nhap gia tri so tu nhien n: ";
	cin >> n;

	if (n > 0) {
		float sum = 0;
		for (size_t i = 1; i <= n; i++)
		{
			sum += 1 * 1.0f / i;
		}

		cout << "Tong = " << sum << endl;
	}
	else {
		cout << "So tu nhien la so >= 0";
	}

	return 0;
}