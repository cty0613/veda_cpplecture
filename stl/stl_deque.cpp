#include <iostream>
#include <list>

using namespace std;

int main() {
    deque<int> mydeque = {10, 20, 30, 40};
    
    mydeque.push_front(5); // 덱 맨 앞에 5 추가
    mydeque.push_back(50); // 덱 맨 뒤에 50 추가

    for (int l : mydeque){
        cout << l << " ";
    }

    cout << endl;

    cout << "first one : " << mydeque.front() << endl;
    cout << "last one : " << mydeque.back() << endl;

    mydeque.pop_back(); // 덱 맨 뒤 pop (=50)
    mydeque.pop_front(); // 덱 맨 앞 pop (=5)

    for (int l : mydeque){
        cout << l << " ";
    }

    cout << endl;

    auto it = mydeque.begin();

    advance(it, 2); // 이터레이터를 2번째 위치로 이동
    mydeque.insert(it, 15); // 2번째 위치에 15 삽입

    for (int l : mydeque){
        cout << l << " ";
    }

    cout << endl;
    return 0;
}