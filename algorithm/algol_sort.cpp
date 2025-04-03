#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
void print_vector_all(vector<T> vec) {
    for (auto i : vec){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = { 5, 3, 8, 11, 4, 1, 7};

    sort(nums.begin(), nums.end());

    print_vector_all(nums);
}