#include<iostream>
using namespace std;

void getUserInput(int*, int);		// nhap mang
int findMax(int*, int);				// tim gia tri lon nhat
int findMin(int*, int);				// tim gia tri nho nhat
int findSecondMax(int*, int, int);	// tim gia tri lon thu hai
int findSecondMin(int*, int, int);	// tim gia tri nho thu hai
void showResult(int*, int, int);	// hien thi ket qua

int main() {
	int n;
	cout << "Nhap n > 0: ";
	cin >> n;
	if (n > 0) {
		int* arr = new int[n];
		getUserInput(arr, n);
		int min = findMin(arr, n);
		int max = findMax(arr, n);
		if (min == max) {
			cout << "\nKHONG CO GIA TRI LON THU HAI VA NHO THU HAI";
		}
		else {
			int seMin = findSecondMin(arr, n, min);
			int seMax = findSecondMax(arr, n, max);
			// hien thi ket qua
			cout << "\nGia tri lon thu hai: " << seMax << endl;
			showResult(arr, n, seMax);
			cout << "Gia tri nho thu hai: " << seMin << endl;
			showResult(arr, n, seMin);
		}
	}
	else {
		cout << "Nhap n > 0!";
	}
	return 0;
}

void showResult(int* arr, int n, int m) {
	cout << "Vi tri cac phan tu: ";
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == m) {
			cout << i << ", ";
		}
	}
	cout << endl;
}

void getUserInput(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

int findMax(int* arr, int n) {
	int max = 0;
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}

int findMin(int* arr, int n) {
	int min = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	return min;
}

int findSecondMin(int* arr, int n, int min) {
	int seMin;
	// khoi tao seMin dam bao khac min
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != min) {
			seMin = arr[i];
			break;
		}
	}

	// tim gia tri nho thu hai
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != min && arr[i] < seMin) {
			seMin = arr[i];
		}
	}
	return seMin;
}

int findSecondMax(int* arr, int n, int max) {
	int seMax;
	// khoi tao seMin dam bao khac min
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != max) {
			seMax = arr[i];
			break;
		}
	}

	// tim gia tri nho thu hai
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != max && arr[i] > seMax) {
			seMax = arr[i];
		}
	}
	return seMax;
}