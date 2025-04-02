#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> mylist = {10, 20, 30, 40};
    
    mylist.push_front(5); // 리스트 맨 앞에 5 추가
    mylist.push_back(50); // 리스트 맨 뒤에 50 추가

    for (int l : mylist){
        cout << l << " ";
    }

    cout << endl;

    mylist.pop_back(); // 리스트 맨 뒤 pop (=50)
    mylist.pop_front(); // 리스트 맨 앞 pop (=5)

    for (int l : mylist){
        cout << l << " ";
    }

    cout << endl;

    auto it = mylist.begin();

    advance(it, 2); // 이터레이터를 2번째 위치로 이동
    mylist.insert(it, 15); // 2번째 위치에 15 삽입

    for (int l : mylist){
        cout << l << " ";
    }

    cout << endl;


    return 0;
}