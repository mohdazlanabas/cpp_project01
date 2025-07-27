// Storage Class
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

long timediff(void);
static string secret = "ISUS";
static long maxcount = 3, maxtime = 60;

bool getPassword() {
	bool ok_flag = false;
	string word; 
	int count = 0, time = 0;
	timediff();
	while(ok_flag != true &&
		++count <= maxcount) {
	cout << "\n \n Input the password: ";
	cin.sync();
	cin >> setw(20) >> word; 
	time += timediff();
	if (time >= maxtime)
	break;
	if(word != secret)
	cout << "Invalid password!" << endl;
else
	ok_flag = true;
	}
	return ok_flag;}

long timediff() {
	static long sec = 0;
	long oldsec = sec;
	time(&sec);
	return(sec - oldsec);
}
