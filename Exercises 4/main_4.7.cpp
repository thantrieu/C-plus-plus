#include <iostream>
#include <fstream>
#include "Bai4.7.h"
using namespace std;

int main() {
	ifstream ifs("Bai4.7.txt");
	size_t n;
	ifs >> n;
	int* arr = new int[n]; // create an array with n number

	getInputFromFile(arr, n, ifs);

	if (check(arr, n)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	ifs.close();
	return 0;
}