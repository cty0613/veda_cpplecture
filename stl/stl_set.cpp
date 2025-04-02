#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> myset = {11, 45, 21, 34, 89, 13, 31, 26, 52};

    for (auto i : myset) {
        cout << i << " ";
    }

    
    return 0;
}