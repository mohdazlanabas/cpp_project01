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

string header = "\n -- Demonstration Unformatted Input -- ";

int main() {
    cout << "Hello World! \n" << endl;

    // Formatting and Manipualtions

    cout << showpos << 123;
    cout.setf( ios::showpos);
    cout << 123;

    cout << 22;
    cout << showpos << 123;

    cout.unsetf (ios::showpos);
    cout <<123 << endl;

    int number;
    cout << "Please enter an integer: ";
    cin >> number;
    cout << uppercase // for hex-digits
    << " octal \t decimal \t hexadecimal\n "
    << oct << number << " \t "
    << dec << number << " \t "
    << hex << number << "\t" << endl;

    double x = 12.0;
    cout.precision(2); // Precision 2
    cout << " By default: " << x << endl;
    cout << " showpoint: " << showpoint << x << endl;
    cout << " fixed: " << fixed << x << endl;
    cout << " scientific: " << scientific << x << endl;

    // Output of Characters, Strings and Boolean Values

    int number2 = ' ';
    cout << "\n The white space code is as follows: " << number << endl;
    char ch;
    string prompt  = "\nPlease enter a character followed by " " <retun> :";
    cout << prompt ;

    cin >> ch;
    number = ch;

    cout << "The character " << ch
        << " has code" << number << endl;
    cout << uppercase // For hex-digits
    << " octal decimal hexadecimal\n "
    << oct << setw(8) << number
    << dec << setw(8) << number
    << hex << setw(8) << number << endl;

    // FORMATTED OUTPUT

    string label;
    double price;
    cout << "\n Please enter an article label: ";
    cin >> setw(16);
    cin >> label;
    cin.sync();
    cin.clear();
    cout << "\n Enter the price of the article: ";
    cin >> price;
    cout << fixed << setprecision (2)
    << "\n Article: "
    << "\n Label: " << label
    << "\n Price: " << price << endl;

    // Formatted Output
    int number3 = 0;

    cout << "\n Enter a heaxadecimal number: " << endl;
    cin  >> hex >> number3;
    cout << "Your decimal input: " << number3 << endl;
    cin.sync();
    cin.clear();
    double x1 = 0.0, x2 = 0.0;
    cout << "\n Now enter two floating-point values: " << endl;
    cout << "1: number: ";
    cin >> x1;
    cout << "2: nnumber: ";
    cin >> x2;
    cout << fixed << setprecision (2)
    << "\n The sum of both numbers: "
    << setw(10) << x1 + x2 << endl;
    cout << "\n The product of both numbers: "
    << setw(10) << x1 * x2 << endl;

    //UNFORMATTED INPUT OUTPUT

    string word, rest;
cout << header
<< "\n Press <return> to go on " << endl;
cin.get();
cout << "\n Please enter a sentences with several words! "
<< "\n End with <!> and <return>."
<< endl;

cin >> word;
getline (cin, rest, '!');
cout << "\n The first word: " << word
<< "\n Remaing Text: " << rest << endl;


    return 0;
}