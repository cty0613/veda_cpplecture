#include <iostream>
#include <vector>

using namespace std;

class Adder {
    private:
        int base;
    public:
        Adder(int i) : base(i) { };
        int operator()(int a) const {
            return base + a;
        }
};

int main() {
    Adder myAdder(5); // base = 5
    Adder urAdder(10); // base = 10

    cout << myAdder(10) << endl; // 5(base) + 10
    cout << urAdder(20) << endl; // 10(base) + 20
    
    return 0;
}