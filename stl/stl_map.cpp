#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> myMap;

    myMap.insert({"apple", 5});
    myMap.insert({"banana", 7});
    myMap.insert({"strawberry", 9});

    for (auto p : myMap) {
        cout << p.first << " : " << p.second << endl;
    }

    auto it = myMap.find("banana");
    cout << it->second << endl;
    return 0;
}