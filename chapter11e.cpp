
//  Keyword Using
// -- This is the starting template --
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <thread>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

void message(){
	cout << "Within function :: message() \n";

}

namespace A
{
using namespace std;
	void message() {
	cout << "Within function A :: message () \n";
	}
}

	namespace B {
using std::cout;
	void message(void);
}
	void B::message(void)
{
cout << "Within function B::message()\n";
	}

int main() {

using namespace std;
		using B::message;
		cout << "Testing namespaces: \n";
		cout << "\nCall of A::message()" << endl;
		A::message();
		cout << "\n Call of B::message()" << endl;
		message();
		cout << "\n Call of::message()" << endl;
		::message();
		return 0;}
