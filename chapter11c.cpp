// The specificers auto and register
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

long strToLong(string str)
{
register int i = 0;
	long vz = 1, num =0;
	for (i=0; i  < str.size() && isspace(str[i]); ++i);
	if (i<str.size()) {
		if(str[i] == '+') { vz =1; ++i;}
		if(str[i] == '-') { vz = -1; ++i;}
	}
	for( ; i < str.size() && isdigit(str[i]); ++i)
     		num  = num * 10 + (str[i] - '0');
		return vz * num;
}



