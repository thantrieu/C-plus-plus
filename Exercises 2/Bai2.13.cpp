#include "pch.h" // su dung trong visual studio 2017 ++
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int tmp = n;
	int nDao = 0;

	// dao gia tri n-> nDao
	while (n > 0) { 
		nDao = nDao * 10 + n % 10;
		n /= 10;
	}

	if (tmp == nDao) {
		cout << tmp << " la so thuan nghich!" << endl;
	}
	else {
		cout << tmp << " khong phai so thuan nghich!" << endl;
	}
	return 0;
}