#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	cout << "Nhap vao 5 so thuc: ";
	cin >> a >> b >> c >> d >> e;

	float max = a; // gia su a la max

	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	if (e > max) {
		max = e;
	}

	if (a == b && b == c && c == d && d == e) {
		cout << "KHONG CO SO LON NHAT!" << endl;
	}
	else {
		cout << "SO CO GIA TRI LON NHAT LA: " << max << endl;
	}
	
	return 0;
}