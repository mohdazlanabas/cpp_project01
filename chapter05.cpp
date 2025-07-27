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
using namespace std;

int main() {
   
    double x,y;
    cout << "\n ENter two floating-point numbers: ";
    cin >> x >> y;
    cout << "The avarage of the two numbers is: "
        << (x + y) / 2.0 << endl;

    // ASSIGNMENT

    float a, b, c;

    cout << "Enter a starting value: ";
    cin >> a;
    a += b;

    cout << "\n And now multiplication! ";
    cout << "\n Please enter a factor: ";
    cin >> b;
    a += b;

    cout << "\n Finally division.";
    cout << "\n Please supply a divisor: ";
    cin >> b;
    a /= b;

    cout << "\n And this is "
    << "your current lucky number: "
    // without digits after
    // the decimal point:
    << fixed << setprecision(0)
    << a << endl;


    return 0;
}
