#include <iostream>
using namespace std;

void veHinhTamGiacVuongCan(int h) {
	for (size_t i = 0; i < h; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
}

int main() {
	int h;
	cout << "Nhap so duong h: ";
	cin >> h;
	veHinhTamGiacVuongCan(h);
	return 0;
}