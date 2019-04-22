#include <fstream>
#include "Bai4.9.h"
#include <cmath>

void getInputFromFile(int* arr, size_t n, std::ifstream& ifs) {
	for (size_t i = 0; i < n; i++)
	{
		ifs >> arr[i];
	}
}

int findResult(int* arr, size_t n, int x) {
	int result = arr[0];
	int k = abs(arr[0] - x); // khoi tao
	for (size_t i = 1; i < n; i++)
	{
		if (abs(arr[i] - x) < k) {
			result = arr[i];
			k = abs(arr[i] - x);
		}
	}

	return result;
}