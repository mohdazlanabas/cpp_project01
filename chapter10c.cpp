#include <iostream>
using namespace std;

void getput(void);

int main() {

	cout << "Please enter a line of text: \n";
	getput();
	cout << "\nBye Bye! " << endl;
	return 0;
}

void getput() {

char c;
	if(cin.get(c) && c != '\n')
		getput();
	cout.put(c);


}
