#include <iostream>
#include <cmath>
using namespace std;

bool kiemTraSoNguyenTo(long n) {
	if (n < 2) {
		return false;
	}
	for (long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool chuSoNguyenTo(long n) {
	char c;
	while (n > 0) {
		c = n % 10;
		n /= 10;
		if (!kiemTraSoNguyenTo(c)) {
			return false;
		}
	}
	return true;
}

bool daoNguyenTo(long n) {
	long m = n;
	long nDao = 0;
	while (n > 0) {
		nDao = nDao * 10 + n % 10;
		n /= 10;
	}
	if (m == nDao) { // n dao
		return kiemTraSoNguyenTo(nDao);
	}
	return false;
}

bool kiemTraTongChuSoNguyenTo(long n) {
	int tongChuSo = 0;
	while (n > 0) {
		tongChuSo += n % 10;
		n /= 10;
	}
	return kiemTraSoNguyenTo(tongChuSo);
}

int main() {
	for (long i = 100000001; i <= 999999999; i += 2)
	{
		if (chuSoNguyenTo(i) && daoNguyenTo(i)
			&& kiemTraTongChuSoNguyenTo(i)
			&& kiemTraSoNguyenTo(i)) {
			cout << i << " ";
		}
	}
	cout << endl;

	return 0;
}
