/*

Pranathi, Cameron, Elena - 10/5/17

Assignment Name : Three Digit Ascend Descend Selection

storing three variables, print out ascending or descending based on if > or < than previous digit

*/

// Libraries

#include <iostream> <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	int calc_1, c, b, a;//slightly altered
	cout << "Enter a three digit number" << endl;
	cin >> calc_1;
	c = calc_1 % 10; // far right *slightly altered
	b = (calc_1 / 10) % 10; // middle
	a = (calc_1 / 10) ; // far left *altered

	if ((c > b) && (b > a)) { //
		cout << "ascending" << endl;
	}

	else if ((a > b) && (b > c)) {
		cout << "descending" << endl;
	}
	else {
		cout << "neither" << endl;
	}

	pause(); // pauses to see the displayed text
}
