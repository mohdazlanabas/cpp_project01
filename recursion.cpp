#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <thread>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int recursion_sum(int m, int n ){
    if(m == n)
        return m;
    return m + recursion_sum(m+1 , n);

}

int main() {
    int m=0, n=100;
    cout << "Sum = " << recursion_sum(m,n);

    /*
    int sum = 0;
    for (int i=m; i <= n; i++) {
        sum += i;
    };
    cout << "Sum= " << sum;
    */

    // Recursion


    return 0;
}