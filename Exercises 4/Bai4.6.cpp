#include <fstream>
#include "Bai4.6.h"

void getInput(int* arr, size_t n, std::ifstream &ifs) {
	for (size_t i = 0; i < n; i++)
	{
		ifs >> arr[i];
	}
}

bool checkNT(int n) {
	if (n < 2) {
		return false;
	}

	for (size_t i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool checkDivK(int n, int k) {
	return n % k == 0;
}

float getMidValue(int sum, int n) {
	if (n != 0) {
		return 1.0f * sum / n;
	}
	return 0;
}
