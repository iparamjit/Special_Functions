// c++ simulation of legendre function of first kind

#include<iostream>
#include<cmath>
using namespace std;

// factorial() -> to calculate the factorial of the number
double factorial(double n) {
	double product = 1;
	for (double i = 1; i <= n; i++) {
		product *= i;
	}
	return product;
}


int main() {

	double n, x;
	// double n -> to store the value of n i.e. order of legendre's function of first kind
	// double x -> to store the value of x at which the value of legendre's function of first kind
	//             is required to be evaluated

	// input of the data
	cout << "Enter the value of n : ";     cin >> n;
	cout << "Enter the value of x : ";     cin >> x;
	cout << "\n";

	// calculation of the value of the legendre's function of first kind
	double value = 0;
	// double value -> to store the value of legendre's function of first kind of order n at x

	if ((int(n)) % 2 == 0) {
		for (double i = 0; i < (n / 2) + 1; i++) {
			double numerator = 1;
			for (double j = 0; j < 2 * i; j++) {
				numerator *= (n - j);
			}
			numerator *= (pow(x, n - (2 * i)) * pow((-1), i));
			double denominator = 1;
			for (double j = 0; j < i; j++) {
				denominator *= ((2 * n) - ((4 * j) + 1));
				denominator *= (2 * (j + 1));
			}
			value += (numerator / denominator);
		}
		double factor = 1;
		for (double i = 1; i <= n; i++) {
			factor *= (2 * i - 1);
		}
		value = (value * factor) / factorial(n);
	}
	else {
		for (double i = 0; i < ((n + 1) / 2); i++) {
			double numerator = 1;
			for (double j = 0; j < 2 * i; j++) {
				numerator *= (n - j);
			}
			numerator *= (pow(x, n - (2 * i)) * pow((-1), i));
			double denominator = 1;
			for (double j = 0; j < i; j++) {
				denominator *= ((2 * n) - ((4 * j) + 1));
				denominator *= (2 * (j + 1));
			}
			value += (numerator / denominator);
		}
		double factor = 1;
		for (double i = 1; i <= n; i++) {
			factor *= (2 * i - 1);
		}
		value = (value * factor) / factorial(n);
	}

	// output of the data
	cout << "The value of LEGENDRE'S FUNCTION OF FIRST KIND of order n ( " << n << " ) at x = " << x << " is : " << value;
	cout << "\n";
	return 0;
}