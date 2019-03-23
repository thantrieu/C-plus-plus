#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int a, b; // ax + b = 0
	float ketQua = 0;

	cout << "Nhap gia tri he so a, b: ";
	cin >> a >> b;
	if (a == 0 && b == 0) {
		cout << "Phuong trinh co vo so nghiem!" << endl;
	}
	else if (a == 0 && b != 0) {
		cout << "Phuong trinh vo nghiem" << endl;
	}
	else {
		ketQua = -b * 1.0 / a;
		cout << "Nghiem phuong trinh " << a << "x"
			<< " + " << b << " = 0 la: x= " << ketQua << endl;
	}

	return 0;
}