#include <iostream>
#include <cmath>
using namespace std;

bool kiemTraThuanNghich(long n) {
	long m = n;
	long nDao = 0;
	while (n > 0) {
		nDao = nDao * 10 + n % 10;
		n /= 10;
	}
	return m == nDao;// true neu m == nDao
}

bool chiChuaChuSoChan(long n) {
	while (n > 0) {
		char c = n % 10;
		n /= 10;
		if (c % 2 != 0) {
			return false;
		}
	}
	return true;
}

bool tongChuSoChiaHetCho5(long n) {
	int tongChuSo = 0;
	while (n > 0) {
		tongChuSo += n % 10;
		n /= 10;
	}
	return tongChuSo % 5 == 0;
}

int main() {
	for (long i = 200000000; i <= 888888888; i += 2)
	{
		if (chiChuaChuSoChan(i) && kiemTraThuanNghich(i) && tongChuSoChiaHetCho5(i)) {
			cout << i << " ";
		}
	}
	cout << endl;

	return 0;
}
