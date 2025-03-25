#include <iostream>

using namespace std;

int main(){
    // string mystr = "Hello World";
    string mystr("Hello World"); // R-VALUE ONLY
    cout << mystr << endl; // "Hello World"
    cout << mystr.length() << endl; // 11

    mystr = "Bye World"; // RE ALLOC ()
    cout << mystr << endl; // "Bye World"
    cout << mystr.length() << endl; // 9
    
    return 0;
}