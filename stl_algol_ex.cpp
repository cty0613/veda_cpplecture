#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> N = {2, 7, 1, 8, 3, 6, 4, 5, 9};
    vector<int> R;

    for(auto n : N) {
        if(n%2 == 0) { 
            R.push_back(n);
        }
        else { 
            continue;
        }
    }

    for(auto r:R) {
        cout << r << " ";
    }
}