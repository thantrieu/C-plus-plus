#include <iostream>
using namespace std;

template <class T> T findMax(T* arr, size_t n) {
	T max = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

template <class T> T findSecondMax(T* arr, size_t n) {
	T max = findMax<T>(arr, n);
	T secondMax = max;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] < secondMax) {
			secondMax = arr[i];
			break;
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != max && arr[i] > secondMax) {
			secondMax = arr[i];
		}
	}
	return secondMax;
}

int main() {
	int arrOfInt[] = { 6, 6, 6 }; // 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7, 11
	double arrOfDouble[] = { 1.2, 5.4, 1.02, 6.98, 7.84, 9.12, 5.12, 4.35, 6.89, 12 };

	int max = findMax<int>(arrOfInt, sizeof(arrOfInt) / sizeof(int));
	int secondMax = findSecondMax<int>(arrOfInt, sizeof(arrOfInt) / sizeof(int));

	if (max == secondMax) {
		cout << "Mang int khong co gia tri lon thu hai" << endl;
	}
	else {
		cout << "Gia tri lon thu hai trong mang int: " << secondMax << endl;
	}

	double dMax = findMax<double>(arrOfDouble, sizeof(arrOfDouble) / sizeof(double));
	double dSecondMax = findSecondMax<double>(arrOfDouble, sizeof(arrOfDouble) / sizeof(double));

	if (dMax == dSecondMax) {
		cout << "Mang double khong co gia tri lon thu hai" << endl;
	}
	else {
		cout << "Gia tri lon thu hai trong mang double: " << dSecondMax << endl;
	}
	return 0;
}