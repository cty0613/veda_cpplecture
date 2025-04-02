#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> vec = {2, 4, 6, 8, 10};

    // 정방향 순회자 (이터레이터)
    for( vector<int>::iterator it = vec.begin() ; it != vec.end(); it++ ){
        cout << *it << " ";
    }

    // 역방향 순회자 (리버스 이터레이터)
    for( vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); rit++) {
        cout << *rit << " ";
    }
}