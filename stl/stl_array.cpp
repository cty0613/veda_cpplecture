#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
    array<int, 5> myarr;
    myarr = {10, 1, 2, 3, 4};

    for (const int& i : myarr){ // range-based for (w reference)
        cout << i << " ";
    }

    for (int i : myarr) { // copy myarr
        cout << i << " ";
    }

    myarr[0] = 100;
    for (auto i : myarr){ // w/ auto type inference
        cout << i << " ";
    }

}