#include<iostream>
using namespace std;

void getUserInput(double*, int);		// nhap mang
double calculResult(double*, int);

int main() {
	int n;
	cout << "Nhap n > 0: ";
	cin >> n;
	if (n > 0) {
		double* arr = new double[n];
		getUserInput(arr, n);
		double res = calculResult(arr, n);
		cout << endl << "TRUNG BINH CONG = " << res << endl;
	}
	else {
		cout << "Nhap n > 0!";
	}
	return 0;
}

void getUserInput(double* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

double calculResult(double* arr, int n) {
	double sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum / n;
}