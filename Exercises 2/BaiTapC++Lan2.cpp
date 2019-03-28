#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n; // bien luu gia tri so tu nhien 

	cout << "Hay nhap gia tri so tu nhien n: ";
	cin >> n;

	if (n < 0) {
		cout << "Vui long nhap vao so tu nhien: ";
	}
	else {
		cout << "So chan nho hon n: \n";
		for (size_t i = 0; i < n; i += 2)
		{
			cout << i << " ";
		}

		cout << endl << "So le nho hon n: " << endl;
		for (size_t i = 1; i < n; i+= 2 )
		{
			cout << i << " ";
		}
		cout << endl;
	}
}
