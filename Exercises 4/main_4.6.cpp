#include <iostream>
#include <fstream>
#include "Bai4.6.h"

using namespace std;

int main() {
	ifstream ifs("Bai4.6.txt");

	int k;
	size_t n;

	ifs >> n >> k;

	int* arr = new int[n];

	getInput(arr, n, ifs); // doc du lieu cho mang

	int sum = 0, count = 0;
	for (size_t i = 0; i < n; i++)
	{
		int x = arr[i];
		if (checkDivK(x, k) || checkNT(x)) {
			count++;
			sum += x;
		}
	}

	float result = getMidValue(sum, count);

	cout << "KQ = " << result << endl;

	return 0;
}