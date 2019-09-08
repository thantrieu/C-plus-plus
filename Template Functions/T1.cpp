#include <iostream>
using namespace std;

template <class T> T max(T a1, T a2, T a3) {
	T res = a1;
	if (a2 > res) {
		res = a2;
	}
	if (a3 > res) {
		res = a3;
	}

	return res;
}

int main() {
	int maxInt;
	float maxFloat;
	long maxLong;

	maxInt = max<int>(1, 6, 9);
	maxFloat = max<float>(2.56f, 9.37f, 4.76f);
	maxLong = max<long>(52525252, 496164165, 156295595);

	cout << "Max int: " << maxInt << endl;
	cout << "Max float: " << maxFloat << endl;
	cout << "Max long: " << maxLong << endl;

	return 0;
}