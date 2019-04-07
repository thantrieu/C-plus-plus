#include <iostream>
using namespace std;

void veHinhTamGiacVuongCan(int h) {
	for (size_t i = 0; i < h; i++)
	{
		for (size_t j = 0; j < h; j++)
		{
			if (j < i) {
				cout << "   ";
			}
			else {
				cout << " * ";
			}
		}
		cout << endl;
	}
}

int main() {
	int h;
	cout << "Nhap so duong h: ";
	cin >> h;
	cout << endl;
	veHinhTamGiacVuongCan(h);
	return 0;
}