#include <iostream>
#include <fstream>
#include "Bai4.9.h"

using namespace std;

int main() {
	ifstream ifs("Bai4.9.txt");
	int x;
	int* arr;
	size_t n;
	ifs >> n >> x;
	arr = new int[n];
	getInputFromFile(arr, n, ifs);
	int result = findResult(arr, n, x);

	cout << "RESULT: " << result << endl;

	ifs.close();
	return 0;
}