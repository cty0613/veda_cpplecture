#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int age;
    float height;
    float weight;
};

void print_all(vector<Person>& vec){
    for (auto i : vec){
        cout << "--------------------" << endl;
        cout << "이름   : " << i.name << endl;
        cout << "나이   : " << i.age << endl;
        cout << "키     : " << i.height << endl;
        cout << "몸무게 : " << i.weight << endl;
    }
}

bool myCompare(const Person& lhs, const Person& rhs){
    // const : 읽기 전용
    // & 사용 이유 : 원본 구조체에 접근하기 위해 (복사 방지)
    return lhs.age > rhs.age;
}

int main() {
    vector<Person> people = { 
        {"Brain", 24, 180, 70 },
        {"Jessica", 22, 165, 55},
        {"James", 30, 170, 65},
        {"Tom", 12, 155, 46},
        {"Mary", 18, 172, 62}
    };

    cout << "-----정렬 전-----" << endl;
    print_all(people);
    cout << endl;
  
    // 사용자 정의 기준으로 정렬
    sort(people.begin(), people.end(), myCompare);
  
    cout << "-----정렬 후-----" << endl;
    print_all(people);

    return 0;
}