#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int dai, rong;
	int chuVi, dienTich;

	cout << "Nhap vao chieu dai, chieu rong hinh chu nhat: ";
	cin >> dai >> rong;
	if (dai >= 0 && rong >= 0) {
		chuVi = (dai + rong) * 2;
		dienTich = dai * rong;

		cout << "Chu vi: " << chuVi << endl;
		cout << "Dien tich: " << dienTich << endl;
	}
	else {
		cout << "Chieu dai hoac chieu rong khong hop le!";
	}
	

	return 0;
}