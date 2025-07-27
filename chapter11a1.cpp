
//-- This is the starting template --
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

extern string line;
void cutline() {
	int i = line.size();
	while(i-- >= 0)
		if(line[i] != ' ' && line[i] != '\t' )
			break;

	line.resize(++i);
}
