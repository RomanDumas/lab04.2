#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	double x, x_p, x_k, dx, A, B, y;
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = x_p;
	while (x <= x_k) {

		if (x < 0 || x == 0) {
			A = log(cos(x)) + x * x * x * x * x;
		}
		else
			if (x > 0 && x < 3) {
				A = cos(1 + log(x)) / sin(1 + log(x));
			}
			else
				if (x == 3) {
					A = cos(1 + log(x)) / sin(1 + log(x));
				}
				else
					if (x > 3) {
						A = 12 * x - x * x * x * x * x * x * x * x;
					}
		y = 2 + 6 * x + A;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;
	

	cout << "y = " << y << endl;
	
	return 0;
}