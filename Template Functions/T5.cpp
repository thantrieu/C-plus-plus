#include <iostream>
using namespace std;

template<class T> T findMin(T* arr, size_t n) {
	T min = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

template<class T> T findSecondMin(T* arr, size_t n) {
	T min = findMin<T>(arr, n);
	T secondMin = min;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > secondMin) {
			secondMin = arr[i];
			break;
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != min && arr[i] < secondMin) {
			secondMin = arr[i];
		}
	}
	return secondMin;
}

int main() {
	int arrOfInt[] = { 6, 6, 6, 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7, 11 }; // 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7, 11
	double arrOfDouble[] = {-1, -2.5, 1.2, 5.4, 1.02, 6.98, 7.84, 9.12, 5.12, 4.35, 6.89, 12 };

	int min = findMin<int>(arrOfInt, sizeof(arrOfInt) / sizeof(int));
	int secondMin = findSecondMin<int>(arrOfInt, sizeof(arrOfInt) / sizeof(int));

	if (min == secondMin) {
		cout << "Mang int khong co gia tri nho thu hai" << endl;
	}
	else {
		cout << "Gia tri nho thu hai trong mang int: " << secondMin << endl;
	}

	double dMin = findMin<double>(arrOfDouble, sizeof(arrOfDouble) / sizeof(double));
	double dSecondMin = findSecondMin<double>(arrOfDouble, sizeof(arrOfDouble) / sizeof(double));

	if (dMin == dSecondMin) {
		cout << "Mang double khong co gia tri nho thu hai" << endl;
	}
	else {
		cout << "Gia tri nho thu hai trong mang double: " << dSecondMin << endl;
	}
	return 0;
}