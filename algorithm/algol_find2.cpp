#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class MyClass{
    private:
        int value;
        string name;
    public:
        MyClass(int value, const string& name) : value(value), name(name) { }
        bool operator==(const MyClass& rhs) const {
            return value == rhs.value && name == rhs.name;
        }

};

int main() {
    vector<MyClass> objs = {
        {1, "one"},
        {2, "two"},
        {3, "tree"},
        {4, "four"},
        {5, "five"}
    };

    auto it = find(objs.begin(), objs.end(), MyClass{3, "three"});

    if (it != objs.end()){
        cout << "we found! : " << distance(objs.begin(), it) << endl;

    } else {
        cout << "we cannot find..." << endl;
    }

    return 0;
}