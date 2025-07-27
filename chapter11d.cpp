
//  
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

namespace MySpace
{
string mess = "Within namespace MySapce";
int count = 0;
double f(double);
}

namespace YourSpace
{
	string mess = "Within namespace YourSpace";
	void f( )
{
	mess += "l";
	}
}

namespace MySpace
{
int g(void);
double f(double y)
	{
	return y / 10.0;
	}
}

int MySpace::g( )
{
return ++count;

}

int main() {

cout << "Testing namespace! \n\n"
	<< MySpace::mess << endl;
	MySpace::g();
	cout << "\n Return value g(): " << MySpace::g()
		<< "\n Return value f(): " << MySpace::f(1.2)
		<< "\n --------" << endl;
	YourSpace::f();
	cout << YourSpace::mess << endl;
	return 0;}
