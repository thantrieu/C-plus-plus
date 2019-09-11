#include <iostream>
using namespace std;
#define M 4
#define N 4

template<class T> T maxElementInCol(T arr[M][N], size_t col) {
	T max = arr[0][col];
	for (size_t i = 1; i < M; i++)
	{
		if (max < arr[i][col]) {
			max = arr[i][col];
		}
	}

	return max;
}

int main() {
	int arr[M][N] = {
		{1, 2, 3, 4},
		{6, 6, 7, 8},
		{6, 4, 1, 3},
		{6, 0, 5, 4}
	};

	cout << "Gia tri lon nhat tren cot chi so 2: " 
		<< maxElementInCol<int>(arr, 2) << endl;

	return 0;
}