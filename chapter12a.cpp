
// Defining Pointers
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


int var, *ptr;

int main() {


	var = 100;
	ptr = &var;

	cout << " Value of var:  " << var
		<< " Address of var: " << &var << endl;
	cout << " Value of ptr: " << ptr
		<< " Address of ptr: " << &ptr <<endl;

	return 0;}
