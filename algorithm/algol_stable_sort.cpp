#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool comparePairs(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
};

int main() {
    vector< pair<int, string> > pairs = {
        {5, "apple"},
        {2, "orange"},
        {6, "moressang"},
        {5, "chim-chak"},
        {3, "grape"},
    };

    stable_sort(pairs.begin(), pairs.end(), comparePairs);

    for (auto i : pairs) {
        cout << i.first << " : " << i.second << endl;
    }
    
    return 0;
}