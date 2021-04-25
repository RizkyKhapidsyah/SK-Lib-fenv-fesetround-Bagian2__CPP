// C program to illustrate
// fesetround() function with rint() function

#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*	Source by GeeksForGeeks
*	Modified by Rizky Khapidsyah
*/

// Driver Program
int main() {
	double x = 3.7, result;
	// setting rounding direction to the nearest integer

	fesetround(FE_TONEAREST);
	result = rint(x);
	cout << result << endl;

	// setting rounding direction towards zero
	fesetround(FE_TOWARDZERO);
	result = rint(x);
	cout << result << endl;

	// setting rounding direction to DOWNWARD
	fesetround(FE_DOWNWARD);
	result = rint(x);
	cout << result << endl;

	// setting rounding direction to UPWARD
	fesetround(FE_UPWARD);
	result = rint(x);
	cout << result << endl;

	_getch();
	return 0;
}
