#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStk;

    myStk.push(3);
    myStk.push(4);
    myStk.push(5);
    

    cout << " stack size : " << myStk.size() << endl;

    cout << " stack top : " << myStk.top() << endl;

    myStk.pop();
    
    cout << " stack top after pop() : " << myStk.top() << endl;

    return 0;
}