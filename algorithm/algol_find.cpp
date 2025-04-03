#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = { 2, 1, 3, 5, 4, 8, 11, 7, 31, 21, 19};

    cout << "찾고 싶은 숫자를 입력하세요 : ";
    int target;
    cin >> target;

    auto it = find(nums.begin(), nums.end(), target);
    
    if( it != nums.end()){ // 이터레이터가 중간에 찾음 (찾은 지점에서 이터레이터 중단)
        cout << "찾은 위치 : " << distance(nums.begin(), it) << endl;
        // vector의 시작점과 이터레이터 사이 거리 출력 (=위치)

    } else { // 이터레이터가 vector의 끝에 도달
        cout << "찾을 수 없음" << endl;
    }
    
    return 0;
}