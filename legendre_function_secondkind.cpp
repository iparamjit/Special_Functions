// c++ simulation of legendre function of second kind

#include<iostream>
#include<cmath>
using namespace std;

double factorial(double n) {
	double product = 1;
	for (double i = 1; i <= n; i++) {
		product *= i;
	}
	return product;
}


int main() {

	double n, x;
	// double n -> to store the value of n i.e. order of legendre's function of second kind
	// double x -> to store the value of x at which the value of legendre's function of second kind
	//             is required to be evaluated

	// input of the data
	cout << "Enter the value of n : ";     cin >> n;
	cout << "Enter the value of x : ";     cin >> x;
	cout << "\n";

	// calculation of the value of the legendre's function of second kind
	double value = 0;
	// double value -> to store the value of legendre's function of second kind of order n at x

	for (double i = 0; i <= 50; i++) {
		double numerator = 1;
		for ( double j = 1; j <= (2 * i); j++ ) {
			numerator *= (n + j);
		}
		numerator *= pow(x, -(n + (2 * i + 1)));
		double denominator = 1;
		for (double j = 1; j <= i; j++) {
			denominator *= (2 * n + (2 * j + 1));
			denominator *= (2 * j);
		}
		value += (numerator / denominator);
	}

	double factor = 1;
	for (double i = 1; i <= (n + 1); i++) {
		factor *= (2 * i - 1);
	}

	value = (value * factorial(n)) / factor;

	// output of the data
	cout << "The value of LEGENDRE'S FUNCTION OF SECOND KIND of order n ( " << n << " ) at x = " << x << " is : " << value;
	cout << "\n";
	return 0;
}