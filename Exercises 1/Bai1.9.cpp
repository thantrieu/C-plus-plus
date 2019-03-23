#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, b, c;
	float x1, x2;
	cout << "Nhap he so a, b, c: ";
	cin >> a >> b >> c;

	if (a == 0) { // giai phuong trinh bac 1
		if (b == 0 && c == 0) {
			cout << "Phuong trinh co vo so nghiem!" << endl;
		}
		else if (b == 0 && c != 0) {
			cout << "Phuong trinh vo nghiem" << endl;
		}
		else {
			float ketQua = -c * 1.0 / b;
			cout << "Nghiem phuong trinh " << b << "x"
				<< " + " << c << " = 0 la: x= " << ketQua << endl;
		}
	}
	else {
		float delta = b * b - 4 * a*c;
		if (delta < 0) {
			cout << "Phuong trinh vo nghiem" << endl;
		}
		else if (delta == 0) {
			cout << "Phuong trinh co nghiem kep x = " 
				<< -b / (2 * a) << endl;
		}
		else {
			x1 = -b + sqrt(delta) / (2 * a);
			x2 = -b - sqrt(delta) / (2 * a);
			cout << "Nghiem phuong trinh la: \n"
				<< "x1 = " << x1 << endl
				<< "x2 = " << x2 << endl;
		}
	}

	return 0;
}