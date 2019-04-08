#include <iostream>
using namespace std;

bool kiemTraThuanNghich(int n) {
	int m = n; // luu lai gia tri cua n
	int nDao = 0;
	while (n > 0) {
		nDao = nDao * 10 + n % 10;
		n /= 10;
	}
	return nDao == m;// neu n thuan nghich thi n == nDao
}

int demChuSoLe(int n) {
	int dem = 0;
	while (n > 0) {
		int c = n % 10; // lay phan don vi cua n
		n /= 10;
		if (c % 2 != 0) {
			dem++;
		}
	}
	return dem;
}

int demChuSoChan(int n) {
	int dem = 0;
	while (n > 0) {
		int c = n % 10; // lay phan don vi cua n
		n /= 10;
		if (c % 2 == 0) {
			dem++;
		}
	}
	return dem;
}

int main() {
	int n;
	cout << "Nhap so duong n: ";
	cin >> n;
	if (n < 0) {
		cout << "Nhap lai so duong n!";
	}
	else {
		if (kiemTraThuanNghich(n)) {
			cout << "THUAN NGHICH!" << endl;
		}
		else {
			cout << "KHONG THUAN NGHICH!" << endl;
		}

		cout << "SO CHU SO LE = " << demChuSoLe(n) << endl;
		cout << "SO CHU SO CHAN = " << demChuSoChan(n) << endl;
	}
	return 0;
}