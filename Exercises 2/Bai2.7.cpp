#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int n;
	int demUoc = 0;
	cout << "Nhap so tu nhien n: ";
	cin >> n;
	if (n < 0) {
		cout << "Vui long nhap so tu nhien > 0";
	}
	else {
		for (size_t i = 1; i <= n; i++)
		{
			if (n %i == 0) {
				cout << i << " ";
				demUoc++;
			}
		}
		cout << endl;
		cout << "So uoc cua n: " << demUoc << endl;
	}

	return 0;
}