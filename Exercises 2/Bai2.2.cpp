#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int n;
	long sum = 0;
	cout << "Nhap gia tri so tu nhien n = ";
	cin >> n;

	/*for (size_t i = 0; i <= n; i++)
	{
		sum += i;
	}*/

	sum = (n + 1)*n / 2;

	cout << "Tong = " << sum << endl;

	return 0;
}