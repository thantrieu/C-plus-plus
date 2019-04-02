#include "pch.h" // su dung trong visual studio 2017 ++
#include <iostream>

using namespace std;

int main() {
	int n;
	int count = 0;
	int i = 2;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n <= 0) {
		cout << "Vui long nhap gia tri nguyen duong n!";
	}
	else {
		while (count < n) {
			bool isTrue = true;
			for (size_t j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0) {
					isTrue = false;
					break;
				}
			}
			if (isTrue) {
				count++;
				cout << i << " ";
			}
			i++;
		}
	}
	return 0;
}