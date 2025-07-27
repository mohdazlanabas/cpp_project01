
//  Expressions with reference types
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


void strToUpper(string&);

int main() {

string text("Test with assignments \n");

	strToUpper(text);
	cout << text << endl;

	strToUpper(text = "Flowers");
	cout << text << endl;

	strToUpper(text += " cheer you up! \n");
	cout << text << endl;

return 0;}


void strToUpper(string& str);
{

	int len = str.length();
	for (int i =0; i< len; ++i)
		str[i] = toupper(str[i]);

}
