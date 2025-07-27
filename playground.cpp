#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int input, input2, taps;
    cout << "Please enter and integer: \n" << endl;
    cin >> input;
    taps = input * 100;
    cout << input << "  " << taps << endl;

	if (input < 100) {
		cout << "Its below 100" << endl;
	} else {
		 cout << "Its above 100" << endl; 
		};
	if (input < 100) {
		input2 = input / 0.35;
    	} else {
		input2 = input * 75;
	};
		cout << input2 << endl;

	return 0;
}
