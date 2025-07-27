
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
#include <ctime>
using namespace std;

void cutline(void);
string line;

int main() {

while (getline(cin, line)) {
		cutline();
		cout << line << endl;
	}

	return 0;}
