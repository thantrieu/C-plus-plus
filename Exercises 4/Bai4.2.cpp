#include<iostream>
using namespace std;

void nhap(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void hienThi(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sapXepTang(int* arr, int n) {
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t j = n-1; j > i; j--)
		{
			if (arr[j] < arr[j - 1]) { // neu phan tu sau nho hon phan tu truoc
				swap(arr[j], arr[j - 1]); // ham sap xep doi cho hai pt nay
			}
		}
	}
}

void sapXepGiam(int* arr, int n) {
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = n - 1; j > i; j--)
		{
			if (arr[j] > arr[j - 1]) { // neu phan tu sau nho hon phan tu truoc
				swap(arr[j], arr[j - 1]); // ham sap xep doi cho hai pt nay
			}
		}
	}
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n > 0) {
		int* arr = new int[n];
		nhap(arr, n);
		cout << endl;
		hienThi(arr, n);

		sapXepTang(arr, n);
		hienThi(arr, n);

		sapXepGiam(arr, n);
		hienThi(arr, n);
	}
	else {
		cout << "Nhap n > 0!";
	}
	return 0;
}