#include <iostream>
#include <vector>

using namespace std;

template <class T>
void print_all(vector<T>& vec) {
    cout << "원소의 갯수 : " << vec.size() << endl;

    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl << "------------------------" << endl;
}


int main() {

    vector<int> vec;

    for(int i=0; i < 10; i++){
        vec.push_back(i*10);
    }

    cout << "백터 원본" << endl;
    print_all(vec);

    // 백터에 원소 삽입
    vec.insert(vec.begin()+ 3, 25);
    cout << "원소 삽입 후" << endl;
    print_all(vec);

    // 백터에서 원소 삭제
    vec.erase(vec.begin()+ 3);
    cout << "원소 삭제 후" << endl;
    print_all(vec);

    return 0;
}