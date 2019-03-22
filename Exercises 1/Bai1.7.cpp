#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	float r;
	cout << "Nhap ban kinh hinh tron: ";

	cin >> r;

	if (r < 0) {
		cout << "Ban kinh khong dung!" << endl;
	}
	else {
		float chuVi = 2 * 3.14 * r;
		float dienTich = 3.14 * r * r;

		cout << "Chu vi: " << chuVi << endl;
		cout << "Dien tich: " << dienTich << endl;
	}

	return 0;
}