#include <iostream>

using namespace std;

int func() { return 0;};
int func(int x) { return 1;};
int func(int x, int y) { return 2;};

int main() {

    cout << func() << endl;
    cout << func(1) << endl;
    cout << func(2, 3) << endl;

    return 0;
}