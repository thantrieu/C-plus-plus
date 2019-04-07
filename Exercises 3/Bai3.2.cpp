#include <iostream>
using namespace std;

void nhap(int& x, int& y) {
	cout << "Nhap gia tri duong x, y: ";
	cin >> x >> y;
}

void veHinhChuNhatRong(int x, int y) {
	for (size_t i = 0; i < y; i++)
	{
		for (size_t j = 0; j < x; j++)
		{
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1) {
				cout << " * ";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
}

int main() {
	int x, y;
	nhap(x, y);
	veHinhChuNhatRong(x, y);
	return 0;
}