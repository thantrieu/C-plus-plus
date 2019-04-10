#include <iostream>
#include <cmath>
using namespace std;

bool kiemTraNguyenTo(int n) {
	if (n < 2) {
		return false;
	}
	for (size_t i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool kiemTraTongChuSoNguyenTo(int n) {
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	return kiemTraNguyenTo(tong);
}

bool kiemTraKhongTang(int n) {
	while (n > 10) {
		char a, b;
		b = n % 10;
		n /= 10;
		a = n % 10;
		if (a < b) {
			return false;
		}
	}
	return true;
}

int main() {
	for (size_t i = 10000000; i <= 99999999; i++)
	{
		if (kiemTraKhongTang(i) && kiemTraTongChuSoNguyenTo(i) 
								&& kiemTraNguyenTo(i)) {
			cout << i << " ";
		}
	}
	cout << endl;

	return 0;
}
