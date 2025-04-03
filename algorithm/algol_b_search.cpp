#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = { 5, 3, 1, 6, 4, 9, 11, 2, 7};

    sort(numbers.begin(), numbers.end());

    int target;
    cout << "컨테이너에서 검색하고 싶은 숫자를 입력하세요 : ";
    cin >> target;
    
    bool found = binary_search(numbers.begin(), numbers.end(), target);
    
    if(found) {
        cout << "찾았습니다!" << endl;

    } else {
        cout << "존재하지 않습니다." << endl;
    }
}