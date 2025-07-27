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


int main() {

    // Function Call
    double x = 2.5, y;
   //  y = pow("x", 3.0);
    // y - pow(x + 3.0);
    y = pow(x, 3.0);
    y = pow (x, 3);

    cout << "2.5 raised to 3 yileds: " << y << endl;
    cout << "2 + (5 raised to the power 2.5) yields: " 
            << 2.0 + pow (5.0, x) << endl;

    // Type void For Functions

    /*
    unsigned int seed;
    int z1,z2,z3;
    cout << "   --- Random Numbers --- \n" << endl;
    cout << "To initialize the random numdber generator, "
        << "\n please enter an integer value: ";
        cin >> seed;
        srand ( seed);
        z1 = rand();
        z2 = rand();
        z3 = rand();

        cout << "\n Three rendom numbers: "
        << z1 << " " << z2 << "  " << z3 << endl;
        */

        // Using Standard Classes

        string prompt ("What is your name: "),
            name,
            line2 ( 40, '-'),
            total = "Helllo ";

            cout << prompt;
            getline( cin, name); 
            total = total + name;

            cout << line2 << endl 
            << total << endl;
            cout << " Your name is "
            << name.length() << " characters long! " << endl;
            cout << line2 << endl;

    return 0;
}