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
   /*
    // The While statement

    int x, count = 0;
    float sum = 0.0;

    cout << "Enter a positive integer (letter to stop): " <<endl;
    while (cin >> x)
    {
        sum += x;
        ++count;
    }
    cout << "The average of the numbers: " << sum / count << endl;

    */

    // For statement

    double rate = 1.5;
    cout << fixed << setprecision(2);
    cout << " \t Euro \t Dollar \n";
    for (int euro  = 1; euro <= 5; ++euro)
    {
        cout << "\t" << euro << "\t" << euro * rate << endl;
    }   

    // Do-While statement

    /*
    const long delay = 100L;

    int tic;
    cout << "\n How often should the tone be output? ";
    cin >> tic;
    do {

        for (long j = 0; j < delay; ++j)
            cout << "Now the tone is output \a" << endl;
    }

    while (--tic > 0);
    cout << "The tone has been output \n";

    */

    // If Else statement

        float d, e, min;
        cout << "Enter two different numbers:\n";

        if( cin >> d && cin >> e) 
        { 
            if( d < e ) 
                min = d;
            else
                min = e;
        cout << "\nThe smaller number is: " << min << endl;
}

else
cout << "\nInvalid Input!" << endl;
    
    // else if statement

    float limit, speed, toofast;
    cout << "\nSpeed limit: ";
    cin >> limit;
    cout << "\nSpeed: ";
    cin >> speed;

    if( (toofast = speed - limit ) < 10)
        cout << "You were lucky!" << endl;
    else if( toofast < 20)
        cout << "Fine payable: 40,-. Dollars" << endl;
    else if( toofast < 30)
        cout << "Fine payable: 80,>. Dollars" << endl;
    else
        cout << "Hand over your driver's license!" << endl;

    // Conditional Expressions

    float x, y;
    cout << "Type two different numbers:\n";
        if( !(cin >> x && cin >> y) ) 
        { 
        cout << "\nInvalid input!" << endl;
        }
    else
        {
        cout << "\nThe greater value is: "
        << (x > y ? x : y) << endl;
}

    // Jumps with breaks, conditions, AND, goto

        int ac = 32;
        while (true) {
            cout << "\n Character \t Decimal \t Hexadecimal \n\n";
            int upper;
    
            for (upper = ac + 20; ac < upper && ac < 256; ++ac) {
                cout << "     " << (char)ac
                     << setw(10) << dec << ac 
                     << setw(10) << hex << ac << endl;
            }
    
            if (ac >= 256) break;
    
            cout << "\n Go on -> <return>. Stop -> <q> + <return>: ";
            char answer;
            cin.get(answer);
    
            if (answer == 'q' || answer == 'Q') {
                break;
            }
    
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        }    

    return 0;
}

