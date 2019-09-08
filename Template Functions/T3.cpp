#include <iostream>
using namespace std;

template<class T> double findMediumNumber(T* arr, size_t n) {
	T sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	if (n > 0) {
		return 1.0 * sum / n;
	}
	else {
		return 0;
	}
}

int main() {
	int arrOfInt[] = { 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7 };
	double arrOfDouble[] = { 1.2, 5.4, 1.02, 6.98, 7.84, 9.12, 5.12, 4.35, 6.89 };
	
	double mInt = findMediumNumber<int>(arrOfInt, sizeof(arrOfInt)/sizeof(int));
	double mDouble = findMediumNumber<double>(arrOfDouble, sizeof(arrOfDouble) / sizeof(double));

	cout << "Gia tri trung binh cua mang int: " << mInt << endl;
	cout << "Gia tri trung binh cua mang double: " << mDouble << endl;

	return 0;
}