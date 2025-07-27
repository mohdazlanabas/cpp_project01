/******
A Program with functions and comments 
*****/

// To display hexademinal integer literals nd deciman integer lietals

#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <thread>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

void line (), message(), space();

void function1(char symbol) {
    for (int i = 0; i < 200; i++)
        cout << symbol ;
}

void function2() {
    for (int i = 0; i < 200; i++)
        cout << "-";
}

// To create a space
void space () {
    cout << "          " << endl;
}

// To draw a line
void line () {
    cout << "---------" << endl;
}

// To display a message
void message() {
    cout << "In function message()." << endl;
}

// Linked List
class Node {
    public:
    int Value;
    Node* Next;
};

void printlist(Node* n) {    
    while (n != NULL) {
        cout << n -> Value << endl;
        n = n -> Next;
    }
};

int main() {

    // Prototypes
    space();
    std::cout << "Hello! The program starts in main ()." << endl;
    message();
    cout << "At the end of main ()." << endl;
    line(); space();

    // Definition of INT_MIN and INT_MAX
    cout << "Range of types int and unsigned int" << endl;
    cout << "Type Minimum Maximum" << endl;
    cout << "int " << INT_MIN << " " << INT_MAX << endl;
    cout << "unsigned int " << " 0 " << UINT_MAX << endl;
    line(); space();

    // cout outputs integers as decimal integers:
    cout << "Outputs integers as decimal integers" << endl;
    cout << "Value of 0xFF = " << 0xFF << " decimal" << endl;

    // Output: 255 decimal
    // The manipulator hex changes output to hexadecimal
    // format (dec changes to decimal format):
    cout << "outputs decimal integers as hexadecimals" << endl;
    cout << "Value of 27 = " << hex << 27 <<" hexadecimal" << endl; 
    line(); space();

    cout << "\nThis is\t a string\n\t\t" " \t\twith \"many\" escape sequences!\n";
    line(); space();

    // Definition and use of variables
    int gVar1; // Global variables,
    int gVar2 = 2; // Explicit initialization
    char ch('A'); // Local variable being initialized
    int sum, number = 3; // Local variables with and without initialization

    // or: char ch = 'A';
    cout << "Value of gVar1: " << gVar1 << endl;
    cout << "Value of gVar2: " << gVar2 << endl;
    cout << "Character in ch: " << ch << endl;
 
    sum = number + 5;
    cout << "Value of sum: " << sum << endl;
    line(); space();

    // Circumference and area of a circle with radius 2.5
    const double pi = 3.141593;
    double area, circuit, radius;
    radius =1.5;
    area = pi * radius * radius;
    circuit = 2 * pi * radius;
    cout << "\nTo Evaluate a Circle:" << endl;
    cout << "Radius: " << radius << endl
    << "Circumference: " << circuit << endl
    << "Area: " << area << endl;
    line(); space();

    //Linked List
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head -> Value = 1;
    head -> Next  = second;
    second -> Value = 2;
    second -> Next = third;
    third -> Value = 3;
    third -> Next = NULL;
    
    cout << "Linked List" << endl;
    printlist(head);
    line(); space();

    // Dictionary > Has Map > Hash Table
    unordered_map <string, string> myDictionary;
    myDictionary.insert(pair<string, string>("apple", "buah"));
    myDictionary.insert(pair<string, string>("banana", "pisang"));
    myDictionary.insert(pair<string, string>("orange", "oren, limau"));
    myDictionary.insert(pair<string, string>("apricot", "alpukat"));

    myDictionary["banana"]="kuning";
    cout << "Number of Items is " << myDictionary.size() << endl;
    // myDictionary.clear();

    for (auto pair : myDictionary) {
        cout << pair.first << " - " << pair.second << endl;
    };
    line(); space();

    /// Multi Threading
    // function1();
    // function2();
    
    thread worker1(function1, 'o');
    thread worker2(function2);
    worker1.join();
    worker2.join();
    line(); space();

    // LAMNBDA

    /* struct {
        void operator() (int x) {
            cout << x << "\n";
        }
    } something; */

    // [cc](p){fd};
    // [](int x){cout << x << "\n";};

    vector <int> v{2,3,7,14,23};
    for_each(v.begin(), v.end(), [](int x) {cout << x << "\n";});     

    return 0;
}
