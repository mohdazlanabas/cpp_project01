// Defining Functions

#include <iostream>
using namespace std;

void test( int, double);

int main() {

cout << "\nNow function test() will be callde \n";
test(10,-7.5);
cout << "\n And back again in main()." << endl;

    return 0;
}

void test(int arg1, double arg2) {
    cout << "\n In function test()."
    << "\n 1. argument: " << arg1
    << "\n 2. argument: " << arg2 << endl;
}