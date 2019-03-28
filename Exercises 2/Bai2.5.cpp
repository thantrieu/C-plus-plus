#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int n;
	long long sum = 0;

	cout << "Nhap gia tri so tu nhien n: ";
	cin >> n;

	long long x = 1;

	for (size_t i = 1; i <= n; i++)
	{
		x *= i; // tinh i!
		sum += x; // cong i! vao tong
	}

	cout << "SUM = " << sum << endl;

	return 0;
}