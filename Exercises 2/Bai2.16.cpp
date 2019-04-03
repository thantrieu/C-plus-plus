#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double c;
	cout << "Nhap c = ";
	cin >> c;

	long n = 0;
	int ex = -1;

	double res = 0;

	double tmp = 1 / (2.0 * n + 1);

	while (tmp >= c) {
		res += ex * tmp * -1;
		ex *= -1;
		n++;
		tmp = 1 / (2.0 * n + 1);
	}

	//double PI = 4 * res;

	//cout << "PI = " << PI << endl;

	cout << fixed << setprecision(30) << M_PI << endl;

	return 0;
}
