#include <iostream>
using namespace std;
#define M 4
#define N 4

template<class T> T minElementInRow(T arr[M][N], size_t row) {
	T min = arr[row][0];
	for (size_t i = 0; i < N; i++)
	{
		if (arr[row][i] < min) {
			min = arr[row][i];
		}
	}
	return min;
}

int main() {
	int arr[M][N] = {
		{1, 2, 3, 4},
		{6, 6, 7, 8},
		{6, 4, 1, 3},
		{6, 0, 5, 4}
	};

	cout << "Gia tri nho nhat tren hang 1: " 
		<< minElementInRow<int>(arr, 1) << endl;

	return 0;
}