#include <iostream>
#include <fstream>
#include "Bai4.7.h"
using namespace std;

int main() {
	ifstream ifs("Bai4.8.txt");
	size_t n; // so phan tu tung mang
	int k; // so bo test
	ifs >> k; // doc so bo test
	while (k > 0) {
		ifs >> n; // doc so phan tu
		int* arr = new int[n]; // create an array with n number

		getInputFromFile(arr, n, ifs); // doc tat ca phan tu cua mang tuong ung

		if (check(arr, n)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		k--;
	}
	ifs.close();
	return 0;
}