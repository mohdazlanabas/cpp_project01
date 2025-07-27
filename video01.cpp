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

// g++ -o ./chapter03 chapter03.cpp

// To create a space
void space () {
    cout << "          " << endl;
}

int main() {

    space()
    std::cout << "Hello!." << endl;
    space();

    float annualSalary; // 5000.99;
    cout << "Please enter you annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    
    cout << "Your annual salary is: " << annualSalary << endl;
    cout << "Your monthly salary is: " << monthlySalary << endl;
    cout << "in ten years you will earn: " << annualSalary * 10 << endl;
    space();

    char character = 'a'; // single quotes for shcaracters

    int yearBirth = 1990;
    char gender = 'm';
    string name = "John Doe";
    bool isOlderThan18 = true;
    double balance = 234567890;

    
    cout << "Size of bool is " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char is " << sizeof(char) << " bytes" << endl;
    cout << "Size of int is " << sizeof(int) << " bytes" << endl;
    cout << "Size of float is " << sizeof(float) << " bytes" << endl;
    cout << "Size of double is " << sizeof(double) << " bytes" << endl;
    cout << "Size of string is " << sizeof(string) << " bytes" << endl;
    cout << "Int min value is " << INT_MIN << endl;
    cout << "Int max value is " << INT_MAX << endl;
    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Unsigned int min value is " << 0 << endl;
    cout << "Unsigned int max value is " << UINT_MAX << endl;

    return 0;
}