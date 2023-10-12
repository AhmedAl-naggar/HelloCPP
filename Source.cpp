#include <iostream>
using namespace std;
void main() {
	// this is my first CPP Program
	int num1, num2;

	// read first number
	cout << "Enter Num1 value: ";
	cin >> num1;

	// read second number
	cout << "Enter Num2 value: ";
	cin >> num2;

	// apply operations
	cout << "Num1 + Num2 = " << num1 + num2 << '\n';
	cout << "Num1 - Num2 = " << num1 - num2 << '\n';
	cout << "Num1 * Num2 = " << num1 * num2 << '\n';

	if (num2 == 0) {
		cout << "Num1 / Num2 = We can not devide by Zero" << '\n';
	}
	else {
		cout << "Num1 / Num2 = " << num1 / num2 << '\n';
	}
}