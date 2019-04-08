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

void lietKeNguyenTo(int n) {
	cout << n << " so nguyen to dau tien: \n";
	if (n == 0) {
		// do nothing
	}
	if (n == 1) {
		cout << 2 << endl;
	} 
	if (n >= 2) {
		cout << 2 << ' ';
		int dem = 1;
		int i = 3;
		while (dem < n) {
			if (kiemTraNguyenTo(i)) {
				dem++;
				cout << i << ' ';
			}
			i += 2;
		}
	}
	cout << endl;
}

void lietKeFibo(int n) {
	cout << n << " so fibo: \n";
	long long f0 = 0, f1 = 1, fn;
	if (n == 0) {
		// do nothing
	}
	if (n == 1) {
		cout << f0 << endl;
	}
	if (n == 2) {
		cout << f0 << ' ' << f1 << endl;
	}
	if (n >= 3) {
		cout << f0 << ' ' << f1 << ' ';
		for (size_t i = 2; i < n; i++)
		{
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
			cout << fn << " ";
		}
	}
	cout << endl;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	lietKeFibo(n);
	lietKeNguyenTo(n);
	return 0;
}