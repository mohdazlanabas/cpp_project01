#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <thread>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// g++ -o ./chapter02 chapter03.cpp

// To create a space
void space () {
    cout << "          " << endl;
}

int main() {

    space();
    std::cout << "Hello!." << endl;

    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1;

    cout << (int) 'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(65) << endl;

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int (c1) << " " << int(c2)
    << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    ß

    return 0;
}