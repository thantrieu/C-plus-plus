#include <fstream>
#include "Bai4.8.h"

void getInputFromFile(int* arr, size_t n, std::ifstream& ifs) {
	for (size_t i = 0; i < n; i++)
	{
		ifs >> arr[i];
	}
}

bool check(int* arr, size_t n) {
	for (size_t i = 0; i <= n / 2; i++)
	{
		if (arr[i] != arr[n - 1 - i]) {
			return false;
		}
	}
	return true;
}