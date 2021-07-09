// c++ simulation of bessel function

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
	// double n -> to store the value of n i.e. order of bessel's function
	// double x -> to store the value of x at which the value of bessel's function
	//             is required to be evaluated

	// input of the data
	cout << "Enter the value of n : ";     cin >> n;
	cout << "Enter the value of x : ";     cin >> x;
	cout << "\n";

	// calculation for the value of the bessel's function
	double value = 0;
	// double value -> to store the value of bessel's function of order n at x

	for (double r = 0; r < 50; r++) {
		double numerator = pow((x / (2.0)), (n + 2 * r)) * pow((-1), r);
		double denominator = factorial(r) * factorial(n + r);
		value += (numerator / denominator);
	}

	// output of the data
	cout << "The value of BESSEL'S FUNCTION of order n ( " << n << " ) at x = " << x << " is : " << value;
	cout << "\n";
	return 0;
}